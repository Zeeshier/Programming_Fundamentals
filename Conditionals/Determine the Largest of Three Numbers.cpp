#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    if (a > b && a > c) {
        cout << a << " is the largest" << endl;
    } else if (b > a && b > c) {
        cout << b << " is the largest" << endl;
    } else {
        cout << c << " is the largest" << endl;
    }
    return 0;
}
