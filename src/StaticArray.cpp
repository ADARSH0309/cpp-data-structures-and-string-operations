#include <iostream>
using namespace std;

class StaticArray {
private:
    int *array;
    int size;
public:
    StaticArray(int size) {
        this->size = size;
        array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = -1; // Initialize with a placeholder value
        }
    }

    void insert(int index, int value) {
        if (index >= 0 && index < size) {
            array[index] = value;
        } else {
            cout << "Index out of bounds" << endl;
        }
    }

    void deleteElement(int index) {
        if (index >= 0 && index < size) {
            array[index] = -1; // Replace with placeholder to indicate deletion
        } else {
            cout << "Index out of bounds" << endl;
        }
    }

    void traverse() {
        for (int i = 0; i < size; i++) {
            if (array[i] != -1) {
                cout << array[i] << " ";
            }
        }
        cout << endl;
    }

    ~StaticArray() {
        delete[] array;
    }
};
