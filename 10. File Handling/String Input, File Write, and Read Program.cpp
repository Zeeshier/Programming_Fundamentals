#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char str[100];
	int i;
	ofstream out("strings.txt");
	ifstream in("strings.txt");
	
	for(i=0;i<5;i++)
	{
		cout << "Enter String:"<< endl;
		cin.getline(str,100);
		out << str<<"\n";
	}
	out.close();
	cout << "The list of strings is as follows:"<< endl;
	while(!in.eof())
	{
		in.getline(str, 100);
		cout << str<< endl;
	}
	in.close();
}
