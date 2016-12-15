using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System.Collections;

namespace PhoenixForgotten {

    [ExecuteInEditMode]
    public class SpriteMeshComponent : MonoBehaviour {

        #region variables

        private static string _meshPath = "Assets/Meshes/_GeneratedQuads";
        private static string _meshPrefix = "Sprite_";
        private static string _meshSuffix = "_Quad";

        [SerializeField]
        [HideInInspector]
        private Sprite _sprite;

        public enum Mode {
            Sprite, Quad
        };

        [SerializeField]
        [HideInInspector]
        private Mode _mode = Mode.Sprite;

        private bool _convert = false;

        #endregion

#if UNITY_EDITOR
        public void Update() {
            if (_convert) {
                if (_mode.Equals(Mode.Quad)) {
                    _ConvertToQuad();
                }
                else if (_mode.Equals(Mode.Sprite)) {
                    _ConvertToSprite();
                }
                _convert = false;
            }
        }

        #region mode tests

        public bool IsSprite() {
            return _mode.Equals(Mode.Sprite);
        }

        public bool IsQuad() {
            return _mode.Equals(Mode.Quad);
        }

        #endregion

        #region conversion methods

        public void ConvertToSprite(bool convertNow = false) {
            _mode = Mode.Sprite;
            _convert = true;

            if (convertNow) {
                _ConvertToSprite();
                _convert = false;
            }
        }

        private void _ConvertToSprite() {
            if (GetComponent<SpriteRenderer>() != null) {
                Debug.LogError(string.Format("{0} is already a sprite!", name));
                return;
            }

            if (_sprite == null) {
                Debug.LogError("This should not happen... You can only use Sprites that have been converted previously");
                return;
            }

            MeshRenderer meshRenderer = GetComponent<MeshRenderer>();
            MeshFilter meshFilter = GetComponent<MeshFilter>();

            Material material = meshRenderer.sharedMaterial;
            int layerId = meshRenderer.sortingLayerID;
            int orderInLayer = meshRenderer.sortingOrder;

            DestroyImmediate(meshRenderer);
            DestroyImmediate(meshFilter);

            SpriteRenderer spriteRenderer = gameObject.AddComponent<SpriteRenderer>();

            spriteRenderer.sprite = _sprite;
            spriteRenderer.sharedMaterial = material;
            spriteRenderer.sortingLayerID = layerId;
            spriteRenderer.sortingOrder = orderInLayer;

            _mode = Mode.Sprite;
        }

        public void ConvertToQuad(bool convertNow = false) {
            _mode = Mode.Quad;
            _convert = true;

            if (convertNow) {
                _ConvertToQuad();
                _convert = false;
            }
        }

        private void _ConvertToQuad() {
            if (GetComponent<MeshRenderer>() != null && GetComponent<MeshFilter>() != null) {
                Debug.LogError(string.Format("{0} is already a quad!", name));
                return;
            }

            if (!_MeshFolderExists()) {
                Debug.LogError(string.Format("Cannot convert sprite to quad. Quad mesh folder ({0}) does not exist.", _meshPath));
                _mode = Mode.Sprite;
                return;
            }

            SpriteRenderer spriteRenderer = GetComponent<SpriteRenderer>();

            _sprite = spriteRenderer.sprite;
            Material material = spriteRenderer.sharedMaterial;
            int layerId = spriteRenderer.sortingLayerID;
            int orderInLayer = spriteRenderer.sortingOrder;

            DestroyImmediate(spriteRenderer);

            MeshRenderer meshRenderer = gameObject.AddComponent<MeshRenderer>();
            MeshFilter meshFilter = gameObject.AddComponent<MeshFilter>();

            meshRenderer.sharedMaterial = material;
            meshRenderer.sortingLayerID = layerId;
            meshRenderer.sortingOrder = orderInLayer;
            meshFilter.sharedMesh = _GetQuadMesh();

            _mode = Mode.Quad;
        }

        #endregion

        #region mesh generation

        private bool _MeshFolderExists() {
            return AssetDatabase.IsValidFolder(_meshPath);
        }

        private Mesh _GetQuadMesh() {
            string meshName = string.Format("{0}{1}{2}", _meshPrefix, _sprite.name, _meshSuffix);
            string meshPath = string.Format("{0}/{1}.asset", _meshPath, meshName);

            Mesh mesh = _CreateMeshFromSprite();
            Mesh existingMesh = AssetDatabase.LoadAssetAtPath(meshPath, typeof(Mesh)) as Mesh;

            if (existingMesh == null) {
                AssetDatabase.CreateAsset(mesh, meshPath);
                existingMesh = AssetDatabase.LoadAssetAtPath(meshPath, typeof(Mesh)) as Mesh;
            }

            if (existingMesh == null) {
                Debug.LogError("Error creating and saving mesh?");
            }

            return existingMesh;
        }

        private Mesh _CreateMeshFromSprite() {
            Mesh mesh = new Mesh();
            mesh.MarkDynamic();

            Vector2[] uvs = new Vector2[_sprite.uv.Length];
            Vector3[] vertices = new Vector3[_sprite.vertices.Length];
            Vector3[] normals = new Vector3[_sprite.vertices.Length];
            int[] triangles = new int[_sprite.triangles.Length];

            for (int i = 0; i <= _sprite.triangles.Length - 1; i++) {
                triangles[i] = _sprite.triangles[i];
            }

            for (int i = 0; i <= _sprite.vertices.Length - 1; i++) {
                vertices[i] = _sprite.vertices[i];
                normals[i] = Vector3.forward;
            }

            for (int i = 0; i <= _sprite.uv.Length - 1; i++) {
                uvs[i] = Vector2.zero;
                uvs[i].x = _sprite.uv[i].x;
                uvs[i].y = _sprite.uv[i].y;
            }

            mesh.vertices = vertices;
            mesh.uv = uvs;
            mesh.normals = normals;
            mesh.triangles = triangles;


            mesh.RecalculateNormals();
            mesh.RecalculateBounds();
            _SolveTangentsForMesh(mesh);

            return mesh;
        }

        //http://forum.unity3d.com/threads/how-to-calculate-mesh-tangents.38984/#post-1043631
        private void _SolveTangentsForMesh(Mesh mesh) {
            int vertexCount = mesh.vertexCount;
            Vector3[] vertices = mesh.vertices;
            Vector3[] normals = mesh.normals;
            Vector2[] texcoords = mesh.uv;
            int[] triangles = mesh.triangles;
            int triangleCount = triangles.Length / 3;

            Vector4[] tangents = new Vector4[vertexCount];
            Vector3[] tan1 = new Vector3[vertexCount];
            Vector3[] tan2 = new Vector3[vertexCount];

            int tri = 0;

            for (int i = 0; i < (triangleCount); i++) {
                int i1 = triangles[tri];
                int i2 = triangles[tri + 1];
                int i3 = triangles[tri + 2];

                Vector3 v1 = vertices[i1];
                Vector3 v2 = vertices[i2];
                Vector3 v3 = vertices[i3];

                Vector2 w1 = texcoords[i1];
                Vector2 w2 = texcoords[i2];
                Vector2 w3 = texcoords[i3];

                float x1 = v2.x - v1.x;
                float x2 = v3.x - v1.x;
                float y1 = v2.y - v1.y;
                float y2 = v3.y - v1.y;
                float z1 = v2.z - v1.z;
                float z2 = v3.z - v1.z;

                float s1 = w2.x - w1.x;
                float s2 = w3.x - w1.x;
                float t1 = w2.y - w1.y;
                float t2 = w3.y - w1.y;

                float r = 1.0f / (s1 * t2 - s2 * t1);
                Vector3 sdir = new Vector3((t2 * x1 - t1 * x2) * r, (t2 * y1 - t1 * y2) * r, (t2 * z1 - t1 * z2) * r);
                Vector3 tdir = new Vector3((s1 * x2 - s2 * x1) * r, (s1 * y2 - s2 * y1) * r, (s1 * z2 - s2 * z1) * r);

                tan1[i1] += sdir;
                tan1[i2] += sdir;
                tan1[i3] += sdir;

                tan2[i1] += tdir;
                tan2[i2] += tdir;
                tan2[i3] += tdir;

                tri += 3;
            }

            for (int i = 0; i < (vertexCount); i++) {
                Vector3 n = normals[i];
                Vector3 t = tan1[i];

                // Gram-Schmidt orthogonalize
                Vector3.OrthoNormalize(ref n, ref t);

                tangents[i].x = t.x;
                tangents[i].y = t.y;
                tangents[i].z = t.z;

                // Calculate handedness
                tangents[i].w = (Vector3.Dot(Vector3.Cross(n, t), tan2[i]) < 0.0f) ? -1.0f : 1.0f;
            }

            mesh.tangents = tangents;
        }

        #endregion
#endif

    }

}