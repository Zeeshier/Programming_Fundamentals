#include <iostream>
using namespace std;
int main()
{
	int n;
	int *ptr;
	cout << "Enter number: " << endl;
	cin >> n;
	ptr = &n;
	cout << "The Value of number is " << n << endl;
	cout << "The Adress of Number is " << ptr <<endl;
}
