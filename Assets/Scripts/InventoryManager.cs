using System.Collections.Generic;
using UnityEngine;

public class InventoryManager : MonoBehaviour
{
    private List<InventorySlot> inventory = new List<InventorySlot>();

    public void AddItem(Item item, int quantity = 1)
    {
        // Check if item is already in inventory
        foreach (InventorySlot slot in inventory)
        {
            if (slot.item == item)
            {
                // Item already in inventory, increase quantity
                slot.quantity += quantity;
                return;
            }
        }

        // Item not in inventory, add new slot
        inventory.Add(new InventorySlot(item, quantity));
    }

    public bool RemoveItem(Item item, int quantity = 1)
    {
        foreach (InventorySlot slot in inventory)
        {
            if (slot.item == item)
            {
                // Item found, decrease or remove slot
                slot.quantity -= quantity;
                if (slot.quantity <= 0)
                {
                    // Remove slot if quantity is 0 or less
                    inventory.Remove(slot);
                }
                return true;
            }
        }

        // Item not found
        return false;
    }

    public bool HasItem(Item item)
    {
        foreach (InventorySlot slot in inventory)
        {
            if (slot.item == item)
            {
                // Item found
                return true;
            }
        }

        // Item not found
        return false;
    }
    
}
