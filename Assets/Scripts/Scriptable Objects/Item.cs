using UnityEngine;

[CreateAssetMenu(fileName = "New Item", menuName = "Inventory/Item")]
public class Item : ScriptableObject
{
    public string itemName = "New Item";    // Name of the item
    public Sprite icon = null;              // Icon of the item
    //Other item values here!
}