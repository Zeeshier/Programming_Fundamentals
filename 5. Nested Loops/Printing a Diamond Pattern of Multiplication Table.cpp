#include <iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		{
	     if(i*j<10)
		   cout<< " ";
		   cout<< i*j;
	    }
		cout << "\n";
	}
	for(i=2;i>=1;i--)
	{
		for(j=1;j<=1;j++)
		{
		 if(i*j<10)
		   cout<< " ";
		   cout<< i*j;
	    }
		cout << "\n";
	}
}
