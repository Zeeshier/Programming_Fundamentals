#include <iostream>
using namespace std;
struct Test
{
	int rollNo;
	int marks[5];
};
int main()
{
	Test t;
	int i , total=0;
	float avg= 0.0;
	cout << "Enter Roll No: " << endl;
	cin >> t.rollNo;
	for(i=0;i<5;i++)
	{
		cout << "Enter Marks: " ;
		cin >> t.marks[i];
		total = total + t.marks[i];
	}
	avg = total/5.0;
	cout << "Roll No: " << t.rollNo<< endl;
	cout << "Total Marks: " << total<< endl;
	cout << "Average: " << avg<< endl;

}
