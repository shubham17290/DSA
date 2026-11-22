//  write a code to print the numbers in the revers order in the memory !
#include <iostream>
#include <string>

using namespace std;
void dec(int n) {
    //  base case is this
    if (n == 0) {
        return;
    }
    dec(n - 1);       // faith , nex call
    cout << n << " "; // work

    return;
}

int main() {
    dec(5);

    return 0;
}
