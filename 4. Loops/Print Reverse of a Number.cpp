#include <iostream>
using namespace std;

int main() {
    int num = 12345;
    int reverse = 0;
    for (; num != 0; num /= 10) {
        reverse = reverse * 10 + num % 10;
    }
    cout << "Reverse of the number: " << reverse << endl;
    return 0;
}
