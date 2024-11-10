#include "../src/DynamicArray.cpp" // Include the implementation of the DynamicArray class

int main() {
    // Create an instance of the DynamicArray class to work with
    DynamicArray dynamicArray;
    
    // Insert element 1 at index 0
    dynamicArray.insert(0, 1);
    
    // Insert element 2 at index 1
    dynamicArray.insert(1, 2);
    
    // Delete the element at index 0 (removes the element '1')
    dynamicArray.deleteElement(0);
    
    // Traverse the array and print its elements after the operations
    // Expected output: 2 (since 1 was removed and 2 remains)
    dynamicArray.traverse();
    
    return 0; // End of the main function
}
