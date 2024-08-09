#include <iostream>
using namespace std;
int main()
{
	int n=10;
	float f =3.14;
	char c = '$';
	
	void *ptr;
	ptr = &n;
	cout << "The value of n: " << n<< endl;
	cout << "The adress of n: " << ptr << endl;
	ptr = &f;
	cout << "The value of f: " << f<< endl;
	cout << "The adress of f: " << ptr << endl;
	ptr = &c;
	cout << "The value of c: " << c<< endl;
	cout << "The adress of c: " << ptr << endl;
}

