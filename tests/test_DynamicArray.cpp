#include "../src/DynamicArray.cpp"

int main() {
    DynamicArray dynamicArray;
    dynamicArray.insert(0, 1);
    dynamicArray.insert(1, 2);
    dynamicArray.deleteElement(0);
    dynamicArray.traverse(); // Expected Output: 2
    return 0;
}
