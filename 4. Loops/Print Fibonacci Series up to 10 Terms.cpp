#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 3; i <= 10; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    return 0;
}
