#include <iostream>
using namespace std;
struct Phone
{
	int nCode;
	int aCode;
	long number;
};
int main()
{
	Phone p1,p2 = {92, 41, 9220083};
	
	cout << "Enter National Code:" << endl;
	cin >> p1.nCode;
	cout << "Enter Area Code:" << endl;
	cin >> p1.aCode;
	cout << "Enter Number:" << endl;
	cin >> p1.number;
	
	
	cout << "1st Number is " << "+"<<p1.nCode<<"-"<<p1.aCode<<"-"<<p1.number<< endl;
	cout << "2nd Number is " << "+"<<p2.nCode<<"-"<<p2.aCode<<"-"<<p2.number<< endl;

}
