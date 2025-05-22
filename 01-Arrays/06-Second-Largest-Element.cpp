#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int largest = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    int second = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (arr[i] != largest) {
            second = max(second, arr[i]);  // ✅ Corrected line
        }
    }

    cout << "Second largest element: " << second;

    return 0;
}
