#include <iostream>
using namespace std;
int main()
{
	int m,n;
	m =4;
	do
	{
		n=m;
		do
		{
			cout<<m<<"\t";
			n--;
		}
		while(n>=1);
		cout<<endl;
			m--;
		}
	while(m>=1);
	
}

