#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    // ✅ Print once only
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
