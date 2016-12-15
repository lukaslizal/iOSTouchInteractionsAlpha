using UnityEngine;
using UnityEditor;
using System.Collections;

namespace PhoenixForgotten {

    [CustomEditor(typeof(SpriteMeshComponent))]
    public class SpriteMeshComponentInspector : Editor {

        SpriteMeshComponent _target;

        public override void OnInspectorGUI() {
            base.OnInspectorGUI();

            EditorGUIUtility.LookLikeControls();
            EditorGUI.indentLevel = 0;

            _target = (SpriteMeshComponent)target;

            //The actual conversion is left up to the SpriteMeshComponent's Update(). If we udpate immediately
            //we end up with MissingReference errors, hence the SetDirty()'s below.

            if (_target.IsSprite()) {
                if (GUILayout.Button(new GUIContent("Convert to Quad"), EditorStyles.miniButtonMid)) {
                    _target.ConvertToQuad();
                    EditorUtility.SetDirty(target);
                    return;
                }
            }
            else if (_target.IsQuad()) {
                if (GUILayout.Button(new GUIContent("Convert to Sprite"), EditorStyles.miniButtonMid)) {
                    _target.ConvertToSprite();
                    EditorUtility.SetDirty(target);
                    return;
                }
            }
        }
    }

}