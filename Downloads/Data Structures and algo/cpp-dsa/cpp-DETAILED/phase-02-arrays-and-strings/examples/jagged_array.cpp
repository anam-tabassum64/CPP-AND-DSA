#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols[] = {2, 3, 4};
    int* arr[3];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols[i]];
        for (int j = 0; j < cols[i]; j++) {
            arr[i][j] = (i + 1) * 10 + j;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    return 0;
}

