#include <iostream>
using namespace std;
struct Employee
{
	int eID;
	int eSalary;
};
int main()
{
	Employee e = {20,30000};
	cout << "Employee ID: " << e.eID<< endl;
	cout << "Employee Salary: " << e.eSalary;
}

