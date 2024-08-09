#include <iostream>
#include <fstream>

using namespace std;
struct Student
{
	int rollNo;
	char name[50];
	int marks;
};
int main()
{
	Student s;
	ofstream out("students.txt",ios::binary);
	for(int i=1;i<=3;i++)
	{
		cout << "Enter Roll No : " ;
		cin >>s.rollNo;
		cout << "Enter Name : " ;
		cin >>s.name;
		cout << "Enter Marks : " ;
		cin >>s.marks;
		out << s.rollNo<<endl<<s.name<<endl <<s.marks<< endl;
	}
	out.close();
	}
