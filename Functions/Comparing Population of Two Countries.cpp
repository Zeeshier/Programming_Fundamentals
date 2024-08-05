#include <iostream>
using namespace std;

struct Pop
{
	char name[50];
	float pop;
};
void fun(Pop x, Pop y);
int main()
{
	Pop a,b;
	cout << "Enter name and Population (in million): " ;
	cin >> a.name>> a.pop;
	cout << "Enter name and Population (in million): " ;
	cin >> b.name>> b.pop;
	fun(a,b);
	return 0;
}

void fun(Pop x,Pop y)
{
	cout << "The country with more population" << endl;
	if(x.pop>y.pop)
	{
		cout << "Name: " << x.name << endl;
		cout << "Population: " << x.pop<< " millions " << endl;
	}
	else
	{
		cout << "Name: " << y.name << endl;
		cout << "Population: " << y.pop<< " millions " <<endl;
	}
}
