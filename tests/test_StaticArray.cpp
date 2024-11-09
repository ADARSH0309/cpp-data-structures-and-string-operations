#include "../src/StaticArray.cpp"

int main() {
    StaticArray staticArray(5);
    staticArray.insert(0, 1);
    staticArray.insert(1, 2);
    staticArray.deleteElement(0);
    staticArray.traverse(); // Expected Output: 2
    return 0;
}
