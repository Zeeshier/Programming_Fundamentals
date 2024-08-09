#include <iostream>
using namespace std;
int main()
{
	int i, marks[5];
	int *ptr;
	cout << "Enter Marks: " <<endl;
	for(i=0;i<5;i++)
	cin >> marks[i];
	ptr = marks;
	cout << "You entered the following marks: " << endl;
	for(i=0;i<5;i++)
	cout << *ptr++<<"\t";
}
