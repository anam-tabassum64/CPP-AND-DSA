#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "level";
    string t = s;
    int i = 0, j = static_cast<int>(t.size()) - 1;
    bool ok = true;

    while (i < j) {
        if (t[i] != t[j]) {
            ok = false;
            break;
        }
        i++;
        j--;
    }

    cout << (ok ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}

