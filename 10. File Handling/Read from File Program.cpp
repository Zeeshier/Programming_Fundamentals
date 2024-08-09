#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n;
	char c;
	double d;
	
	ifstream file("test.txt");
	if(!file)
	{
		cout << "Error File Opening.";
		exit(1);
		
	}
	file>>n>>c >>d;
	cout << "The contents of files are as follow:"<< endl;
	cout << n << endl<<c<<endl<<d<< endl;
	file.close();
}
