#include <iostream>
using namespace std;
int main()
{
	float arr[5], *ptr;
	int i;
	cout << "Enter Values: " << endl;
	for(i=0;i<5;i++)
	cin >> arr[i];
	ptr = &arr[4];
	
	cout << "The values in revered order: " << endl;
	for(i=0;i<5;i++)
	cout << *ptr--<< endl;
}
