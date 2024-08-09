#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char city[50];
	int i;
	ofstream cities("city.txt");

	for(i=0;i<5;i++)
	{
	   cout <<"Enter City: " ;
	   cin >> city;
	   cities << city<< "\n";
    }
    

	cities.close();
}
