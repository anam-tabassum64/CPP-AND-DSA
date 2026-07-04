#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 4, 5, 0, 0};
    int n = 4;
    int pos = 2;
    int value = 3;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

