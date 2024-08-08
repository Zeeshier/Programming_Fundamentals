#include <iostream>
using namespace std;
float area(int b , int h);

int main()
{
	int height, base;
	float ar;
	cout << "Enter Height: " << endl;
	cin >> height;
	cout << "Enter Base: " << endl;
	cin >> base;
	ar = area(base,height);
	cout << "Area of Triangle is " << ar<< endl;
	return 0;
}
float area(int b, int h)
{
	float a;
	a = 0.5*b*h;
	return a;
}
