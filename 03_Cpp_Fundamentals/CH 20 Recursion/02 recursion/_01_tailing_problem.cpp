//  solve the tailing problem using the recursion
#include <iostream>
using namespace std;
int tailing_problem(int n) {
    //  2 * n
    if (n == 0 || n == 1) {
        return 1;
    }

    /*   //  vertical placing of the tile
      int ans1 = tailing_problem(n - 1); // 2*n - 1

      //  horizontally
      int ans2 = tailing_problem(n - 2); // 2*n - 2

      return ans1 + ans2;*/

    return tailing_problem(n - 1) + tailing_problem(n - 2);
}

int main() {
    int n;
    cout << " enter the number of tiles : " << endl;
    cin >> n;

    cout << tailing_problem(n) << endl;
    return 0;
}
