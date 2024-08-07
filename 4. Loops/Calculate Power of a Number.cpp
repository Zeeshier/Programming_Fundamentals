#include <iostream>
using namespace std;

int main() {
    int base = 2;
    int exponent = 5;
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    return 0;
}
