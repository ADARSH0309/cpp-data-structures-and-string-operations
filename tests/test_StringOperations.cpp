#include "../src/StringOperations.cpp"
#include "../src/CharacterFrequency.cpp"

int main() {
    StringOperations stringOps;
    
    cout << "Concatenation: " << stringOps.concatenate("hello", "world") << endl; // Expected: "helloworld"
    
    cout << "Substring: " << stringOps.substring("hello", 2, 2) << endl; // Expected: "ll"
    
    cout << "Comparison: " << (stringOps.compare("hello", "world") ? "True" : "False") << endl; // Expected: False

    cout << "Character Frequency:" << endl;
    
    characterFrequency("hello"); // Expected: {'h': 1, 'e': 1, 'l': 2, 'o': 1}

    return 0;
}
