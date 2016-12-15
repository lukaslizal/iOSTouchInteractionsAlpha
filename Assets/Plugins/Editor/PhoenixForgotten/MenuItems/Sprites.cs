using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;

namespace PhoenixForgotten {
    public class SpriteMenuItems {


        [MenuItem("Tools/Phoenix Forgotten/Sprites/Convert Sprites to Quads")]
        private static void ConvertSpritesToQuads() {
            string tag = "Convert Sprites to Quads";

            GameObject[] selectedObjects = Selection.gameObjects;

            if (selectedObjects.Length == 0) {
                Debug.LogWarning(string.Format("[{0}] no game objects selected", tag));
                return;
            }

            List<GameObject> toConvert = new List<GameObject>();

            foreach (GameObject gameObject in selectedObjects) {
                bool hasSprite = gameObject.GetComponent<SpriteRenderer>() != null;
                bool hasConverter = gameObject.GetComponent<SpriteMeshComponent>() != null;

                //ignore non sprites or sprites with the SpriteMeshComponent
                if (!hasSprite || hasConverter) {
                    continue;
                }

                toConvert.Add(gameObject);
            }

            Debug.Log(string.Format("[{0}] {1} objects selected; {2} to be converted, {3} ignored (not sprite or has SpriteMeshComponent)",
                tag, selectedObjects.Length, toConvert.Count, selectedObjects.Length - toConvert.Count));

            foreach (GameObject gameObject in toConvert) {
                SpriteMeshComponent converter = gameObject.AddComponent<SpriteMeshComponent>();
                converter.ConvertToQuad(true);
                GameObject.DestroyImmediate(converter);
            }

            Debug.Log(string.Format("[{0}] finished", tag));
        }
    }
}