#include <iostream>
#include <string>
using namespace std;

class StringOperations {
public:
    string concatenate(string str1, string str2) {
        return str1 + str2;
    }

    string substring(string str, int start, int length) {
        if (start >= 0 && start + length <= str.size()) {
            return str.substr(start, length);
        } else {
            return "Invalid range";
        }
    }

    bool compare(string str1, string str2) {
        return str1 == str2;
    }
};
