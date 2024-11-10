#include "../src/StringOperations.cpp" // Include the StringOperations class implementation
#include "../src/CharacterFrequency.cpp" // Include the character frequency function implementation

int main() {
    // Create an object of StringOperations to test its methods
    StringOperations stringOps;

    // Test the concatenate method and display the result
    cout << "Concatenation: " << stringOps.concatenate("hello", "world") << endl; // Expected: "helloworld"

    // Test the substring method and display the result
    cout << "Substring: " << stringOps.substring("hello", 2, 2) << endl; // Expected: "ll"

    // Test the compare method and display if the strings are the same
    cout << "Comparison: " << (stringOps.compare("hello", "world") ? "True" : "False") << endl; // Expected: False

    // Display the character frequency count for the given string
    cout << "Character Frequency:" << endl;
    characterFrequency("hello"); // Expected output: {'h': 1, 'e': 1, 'l': 2, 'o': 1}

    return 0; // End of the main function
}
