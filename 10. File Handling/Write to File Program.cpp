#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n=10;
	char c= '*';
	double d=39.125;
	
	ofstream file("test.txt");
	if(!file)
	{
		cout << "File opening Error.";
		exit(1);
	}
     file << n << ' ' << c << ' ' << d;
	
	file.close();
	
}
