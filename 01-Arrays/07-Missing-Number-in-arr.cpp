#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;  // Total numbers from 1 to n

    int totalSum = n * (n + 1) / 2;

    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    int missing = totalSum - arraySum;

    cout << "Missing number is: " << missing;
    return 0;
}
