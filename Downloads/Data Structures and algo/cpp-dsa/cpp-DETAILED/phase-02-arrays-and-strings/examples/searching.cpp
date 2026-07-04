#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 3, 9, 1, 5};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    cout << index << endl;
    return 0;
}

