#include <iostream>
#include <map>
using namespace std;

// Function to calculate and display the frequency of each character in the string
void characterFrequency(string str) {
    // Declare a map to store character frequencies
    map<char, int> freq;

    // Loop through each character in the string and update its frequency in the map
    for (char c : str) {
        freq[c]++; // Increment the count of the character
    }

    // Loop through the map and print each character and its frequency
    for (auto &pair : freq) {
        cout << pair.first << ": " << pair.second << endl; // Print character and its frequency
    }
}
