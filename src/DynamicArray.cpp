#include <iostream>
#include <vector>
using namespace std;

class DynamicArray {
private:
    vector<int> array; // Vector to store elements of the dynamic array

public:
    // Function to insert an element at a specific index in the dynamic array
    void insert(int index, int value) {
        // Check if the index is within valid range
        if (index >= 0 && index <= array.size()) {
            array.insert(array.begin() + index, value); // Insert element at the given index
        } else {
            cout << "Index out of bounds" << endl; // Error message for invalid index
        }
    }

    // Function to delete an element at a specific index in the dynamic array
    void deleteElement(int index) {
        // Check if the index is within valid range
        if (index >= 0 && index < array.size()) {
            array.erase(array.begin() + index); // Remove the element at the given index
        } else {
            cout << "Index out of bounds" << endl; // Error message for invalid index
        }
    }

    // Function to traverse and print all elements of the dynamic array
    void traverse() {
        // Loop through the array and print each element
        for (int i = 0; i < array.size(); i++) {
            cout << array[i] << " "; // Print element at index i
        }
        cout << endl; // Print a newline after displaying all elements
    }
};
