#include <iostream>
using namespace std;
void swap(int &x , int &y);

int main()
{
	int a,b;
	cout << "Enter two Number: " << endl;
	cin >> a;
	cin >> b;
	
	cout << "Values Before Swapping:" << endl;
	cout << " a is " << a << endl;
	cout << " b is " << b << endl;
	
	cout << "Swapping the Values..." << endl;
	swap(a,b);
	cout << "Values After Swapping:" << endl;
	cout << " a is " << a << endl;
	cout << " b is " << b << endl;
}
void swap(int &x , int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
