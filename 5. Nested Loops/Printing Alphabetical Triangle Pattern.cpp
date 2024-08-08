#include <iostream>
using namespace std;
int main()
{
	char ch='A';
	int i,j,n;
	cout << "Enter Height of Triangle: " << endl;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout << ch<< " ";
			ch++;
		}
	cout << "\n";
	}
}
