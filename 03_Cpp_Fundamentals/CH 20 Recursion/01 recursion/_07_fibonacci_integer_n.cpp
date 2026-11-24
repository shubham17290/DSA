#include <iostream>
using namespace std;
int fibonacci(int n) {
    //   core logic for the fibonnaci number
    //  base case of the fibonacci number
    if (n == 0 || n == 1) {
        //  return
        return n; // 0 , 1
    }
    //   faith logic -> all the work that a main function has to do after the each function call

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << " enter your number sir :" << endl;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
