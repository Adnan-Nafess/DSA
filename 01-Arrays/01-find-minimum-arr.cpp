#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {2, 3, 1, 5, 4};
    int ans = INT_MAX;

    for(int i = 0; i < 5; i++) {
        
        if (arr[i] < ans) {
            ans = arr[i];
        }
    }

    cout << ans;
}