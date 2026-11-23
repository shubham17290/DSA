#include <iostream>
using namespace std;
bool issorted(int arr[], int n, int i) {
    //  base case
    if (i == n - 1) {
        return true;
    }
    //  core logic
    if (arr[i] > arr[i + 1]) {
        return false;
    }
    issorted(arr, n, i + 1);
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5}; // sorted -> 1
    int arr2[6] = {1, 2, 3, 5, 4};
    cout << issorted(arr1, 5, 0) << endl;
    ;
    cout << issorted(arr2, 5, 0);
    return 0;
}
