#include <iostream>
using namespace std;
void max(int a, int b);

int main()
{
	int x,y;
	cout << "Enter Two Numbers: " << endl;
	cin >> x>>y;
	
	max(x,y);
	return 0;
	
}

void max(int a,int b)
{
	if(a>b)
	{
		cout << "maximun is " << a<< endl;
	}
	else
	    cout << "maximum is " << b << endl;
}
