#include <iostream>
using namespace std;

int main() {
    int src[] = {1, 2, 3, 4};
    int dst[4];
    int n = 4;

    for (int i = 0; i < n; i++) {
        dst[i] = src[i];
    }

    for (int i = 0; i < n; i++) cout << dst[i] << " ";
    cout << endl;
    return 0;
}

