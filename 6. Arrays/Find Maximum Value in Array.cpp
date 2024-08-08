#include <iostream>
using namespace std;
int main()
{
	int arr[10],i,max;
	for(i=0;i<10;i++)
	{
	   cout << "Enter Integer:";
	   cin >> arr[i];
	}
	   max = arr[0];
	   for(i=0;i<10;i++)
	   {
		 if(max<arr[i])
		 max = arr[i];
 	   }
	cout << "Maximum value is: "<< max<< endl;
}
