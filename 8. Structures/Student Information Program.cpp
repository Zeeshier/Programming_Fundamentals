#include <iostream>
using namespace std;
struct Student
{
	int rollNo;
	int marks[5];
};
int main()
{
	Student Usman;
    Usman.rollNo=7;
	Usman.marks[0]=89;
	Usman.marks[1]=92;
	Usman.marks[2]=74;
	Usman.marks[3]=97;
	Usman.marks[4]=83;
	
	cout << "Roll No: " << Usman.rollNo<< endl;
	cout << "Marks 1: " << Usman.marks[0]<< endl;
	cout << "Marks 2: " << Usman.marks[1]<< endl;
	cout << "Marks 3: " << Usman.marks[2]<< endl;
	cout << "Marks 4: " << Usman.marks[3]<< endl;
	cout << "Marks 5: " << Usman.marks[4]<< endl;


}
