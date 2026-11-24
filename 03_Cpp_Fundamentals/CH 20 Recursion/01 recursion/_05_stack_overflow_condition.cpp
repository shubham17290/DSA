//  this is known as the stack overflow situation
#include <iostream>
using namespace std;

void fun() {
    cout << " function called ... kaam" << endl;
    fun();
}

int main() {

    fun();

    return 0;
}
