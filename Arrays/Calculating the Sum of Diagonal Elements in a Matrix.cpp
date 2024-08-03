#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[4][4], sum =0;
	
	cout << "Enter the Elements of Matrix: "<< endl;
	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{
			cout << "Elements " << i+1<< ","<<j+1<< ":";
			cin >> arr[i][j];
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			sum = sum + arr[i][j];
		}
	}
	cout << "Sum of diagonal is :"<< sum;
}
