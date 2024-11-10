#include <iostream>
#include <string>
using namespace std;

class StringOperations {
public:
    // Function to concatenate two strings
    string concatenate(string str1, string str2) {
        return str1 + str2; // Returns the concatenated result of str1 and str2
    }

    // Function to get a substring from a string
    string substring(string str, int start, int length) {
        // Check if the start index and length are within the bounds of the string
        if (start >= 0 && start + length <= str.size()) {
            return str.substr(start, length); // Return the substring starting from 'start' index with 'length' characters
        } else {
            return "Invalid range"; // Return an error message if the range is invalid
        }
    }

    // Function to compare two strings
    bool compare(string str1, string str2) {
        return str1 == str2; // Return true if both strings are equal, otherwise return false
    }
};
