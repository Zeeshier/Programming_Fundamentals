#include <iostream>
using namespace std;
int main()
{
	int arr[5],i,sum=0;
	float avg=0.0;
	for(i=0;i<5;i++)
	{
		cout << "Enter Integer: ";
		cin >> arr[i];
		sum = sum + arr[i];
	}
	avg = sum/5.0;
	cout << "Sum is: "<< sum<< endl;
	cout << "Average is: "<< avg << endl;
}
