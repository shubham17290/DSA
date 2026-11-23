//  write a recursive code to find the sum of n natural numbers !
#include <iostream>
using namespace std;

int sum(int n) {
    //  base case is this
    if (n == 0) {
        return 0;
    }

    return n + sum(n - 1); // work + faith , nex call
}

int main() {
    int n;
    cout << " enter your number here  :" << endl;
    cin >> n;
    int ans = sum(n);
    cout << "sum of first " << n << " natural numbers is " << ans << endl;
    return 0;
}
