#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s = "arrays";
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}

