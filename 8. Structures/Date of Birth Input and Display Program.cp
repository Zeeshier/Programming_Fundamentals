#include <iostream>
using namespace std;
struct Birth
{
	int day;
	int month;
	float year;
	
};
int main()
{
	Birth b;
	cout << "Enter Day:" << endl;
	cin >> b.day;
	cout << "Enter Month:" << endl;
	cin >> b.month;
	cout << "Enter Year:" << endl;
	cin >> b.year;
	
	cout << "Your date of birth is " << b.day<<"/"<<b.month<<"/"<<b.year<<endl;
	 
}
