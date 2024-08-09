#include <iostream>
using namespace std;
struct Student
{
	int rollno;
	int marks;
	float avg;
	char grade;
};
int main()
{
	Student s;
	cout << "Enter Roll No: " << endl;
	cin >> s.rollno;
	cout << "Enter Marks: " << endl;
	cin >> s.marks;
	cout << "Enter Average: " << endl;
	cin >> s.avg;
	cout << "Enter Grade: " << endl;
	cin >> s.grade;
	
	cout << "You Entered Detail in following:" << endl;
	cout << "Roll No: " << s.rollno << endl;
	cout << "Marks: " << s.marks << endl;
	cout << "Average: " << s.avg << endl;
	cout << "Grade: " << s.grade << endl;

}
