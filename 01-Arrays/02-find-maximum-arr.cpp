#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[5] = {3, 5, 10, 12, 4};
    int ans = INT_MIN;

    for (int i=0; i<5; i++) {

        if(arr[i] > ans) {
            ans = arr[i];
        }
    }

    cout << ans;
}