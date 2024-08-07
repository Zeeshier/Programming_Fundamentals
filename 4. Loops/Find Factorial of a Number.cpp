#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << num << ": " << factorial << endl;
    return 0;
}
