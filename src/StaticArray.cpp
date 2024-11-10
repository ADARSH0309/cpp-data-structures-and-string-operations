#include <iostream>
using namespace std;

class StaticArray {
private:
    int *array; // Pointer to dynamically allocated array
    int size;   // Size of the array

public:
    // Constructor to initialize the static array with a given size
    StaticArray(int size) {
        this->size = size; // Set the size of the array
        array = new int[size]; // Dynamically allocate memory for the array
        
        // Initialize array elements with a placeholder value (-1)
        for (int i = 0; i < size; i++) {
            array[i] = -1; // -1 is used as a placeholder to indicate uninitialized elements
        }
    }

    // Function to insert a value at a specific index
    void insert(int index, int value) {
        // Check if the index is within bounds
        if (index >= 0 && index < size) {
            array[index] = value; // Insert value at the specified index
        } else {
            cout << "Index out of bounds" << endl; // Error message for invalid index
        }
    }

    // Function to delete an element at a specific index
    void deleteElement(int index) {
        // Check if the index is within bounds
        if (index >= 0 && index < size) {
            array[index] = -1; // Mark the element as deleted by setting it to the placeholder value (-1)
        } else {
            cout << "Index out of bounds" << endl; // Error message for invalid index
        }
    }

    // Function to traverse and print all elements in the array
    void traverse() {
        // Loop through the array and print elements that are not marked as deleted (-1)
        for (int i = 0; i < size; i++) {
            if (array[i] != -1) {
                cout << array[i] << " "; // Print element at index i if it's not deleted
            }
        }
        cout << endl; // Print a newline after displaying all elements
    }

    // Destructor to free dynamically allocated memory
    ~StaticArray() {
        delete[] array; // Deallocate the memory used by the array
    }
};
