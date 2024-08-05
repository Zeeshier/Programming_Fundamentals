#include <iostream>
using namespace std;
int square(int n);
int cube(int n);

int main()
{
	int a,b,sum;
	cout << "Enter an Integer: " ;
	cin >> a;
	cout << "Enter an Integer: " ;
	cin >> b;
	sum = square(a) + cube(b);
	cout << "The sum of square and cube is "<< sum ;
	return 0;
}

int square(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}
