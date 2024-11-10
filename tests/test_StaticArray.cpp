#include "../src/StaticArray.cpp" // Include the implementation of the StaticArray class

int main() {
    // Create an instance of StaticArray with a size of 5
    StaticArray staticArray(5);

    // Insert element 1 at index 0
    staticArray.insert(0, 1);

    // Insert element 2 at index 1
    staticArray.insert(1, 2);

    // Delete the element at index 0 (sets it to -1 as a placeholder)
    staticArray.deleteElement(0);

    // Traverse the array and print the non-deleted elements
    // Expected output: 2 (since 1 is marked as deleted and not printed)
    staticArray.traverse();

    return 0; // End of the main function
}
