#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char c;
	int i;
	ofstream out("chars.txt");
	
	for(i=0;i<5;i++)
	{
		cout << "Enter Character: ";
		cin >> c;
		out << c << "\n";
	}
	out.close();
}
