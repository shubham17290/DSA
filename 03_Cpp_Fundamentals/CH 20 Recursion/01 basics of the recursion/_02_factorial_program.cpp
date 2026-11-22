#include <iostream>
using namespace std;
//  factorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << " enter your number here  :" << endl;
    cin >> n;
    int fact = factorial(n);
    cout << "factorail of " << fact << endl;
    return 0;
}
