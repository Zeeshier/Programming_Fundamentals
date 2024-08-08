#include <iostream>
using namespace std;
int main()
{
	char choice;
	int i,j,count;
	cout << "Enter Character: " << endl;
	cin >> choice;
	count =1;
	for(i=0;i<5;++i)
	{
		cout<<endl;
		for(j=0;j<5*2-1;++j)
		if(j==i || j==((5*2-1)-count))
		cout<< choice;
		else
		cout << " ";
		++count;
	}
}
