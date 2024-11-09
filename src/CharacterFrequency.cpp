#include <iostream>
#include <map>
using namespace std;

void characterFrequency(string str) {
    map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }

    for (auto &pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}
