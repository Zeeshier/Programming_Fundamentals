#include <iostream>
using namespace std;
int main()
{
	int a,b,s,*p1,*p2;
	p1 = &a;
	p2 = &b;
	cout << "Enter Integer:" << endl;
	cin >> *p1;
	cout << "Enter Integer: " << endl;
	cin >> *p2;
	s= *p1 + *p2;
	cout << *p1 << " + " << *p2 <<" = " << s<< endl;
	
}
