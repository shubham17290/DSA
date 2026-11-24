#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n;
    int m;
    cout << " enter both numbers m and n " << endl;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
