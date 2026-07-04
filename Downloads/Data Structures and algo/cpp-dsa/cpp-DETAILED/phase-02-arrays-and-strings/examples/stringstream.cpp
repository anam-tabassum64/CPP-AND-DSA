#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string text = "one two three";
    stringstream ss(text);
    string word;

    while (ss >> word) {
        cout << word << endl;
    }
    return 0;
}

