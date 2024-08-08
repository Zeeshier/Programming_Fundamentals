#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=i;j>1;j--)
		cout<<" ";
		  for(j=1;j<=6+1-i;j++)
		     cout << j<<" ";
		     cout<< endl; 
	}
}
