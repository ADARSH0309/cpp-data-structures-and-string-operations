#include <iostream>
#include <vector>
using namespace std;

class DynamicArray {
private:
    vector<int> array;
public:
    void insert(int index, int value) {
        if (index >= 0 && index <= array.size()) {
            array.insert(array.begin() + index, value);
        } else {
            cout << "Index out of bounds" << endl;
        }
    }

    void deleteElement(int index) {
        if (index >= 0 && index < array.size()) {
            array.erase(array.begin() + index);
        } else {
            cout << "Index out of bounds" << endl;
        }
    }

    void traverse() {
        for (int i = 0; i < array.size(); i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};
