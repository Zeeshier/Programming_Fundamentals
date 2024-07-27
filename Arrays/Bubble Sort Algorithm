#include <iostream>
using namespace std;
int main()
{
	int arr[5],i,j,temp;
	for(i=0;i<5;i++)
	{
		cout << "Enter Value:" ;
		cin >> arr[i];
	}
	 cout << "\n The Original Array: \n";
	for(i=0;i<5;i++)
		cout << arr[i]<< " ";
		
	for(i=0;i<5;i++)
	{ 
		for(j=0;j<4;j++)
		 { 
		   if(arr[j]>arr[j+1])
		    {
		     	temp = arr[j];
			     arr[j] = arr[j+1];
			     arr[j+1] = temp;
			}
		}
    }
    
	cout << "\n The Sorted Array: \n";
		for(i=0;i<5;i++)
		 cout << arr[i]<< " ";
	   }
