#include <iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int n,mid,start,end, loc;
	loc =-1;
	start =0;
	end =9;
	cout << "Enter Number to find: "<< endl;
	cin >> n;
	
	while(start<=end)
	{
		mid = (start+end)/2;
		if(arr[mid]==n)
		{
			loc = mid;
			break;
		}
		else if(arr[mid]>n)
		end = mid-1;
		else
		start = mid +1;
	}
	if(loc==-1)
	cout << n<<" not found.";
	else
	cout << n << " found at index "<< loc;
}
