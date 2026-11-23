#include <cmath> // Required for pow() function
#include <iostream>

using namespace std;

int main() {
    double x, y, result;

    // Input base (x)
    cout << "Enter the base (x): ";
    cin >> x;

    // Input exponent (y)
    cout << "Enter the exponent (y): ";
    cin >> y;

    // Calculate x raised to the power y
    result = pow(x, y);

    // Display the result
    cout << x << " raised to the power " << y << " = " << result << endl;

    return 0;
}
