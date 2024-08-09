#include <iostream>
using namespace std;
struct Book
{
	int id;
	int pages;
	float price;
	
};
int main()
{
	Book b1,b2;
	cout << "Enter ID, Pages, and Price of 1st Book: " << endl;
	cin >> b1.id>>b1.pages>>b1.price;
	cout << "Enter ID, Pages, and Price of 2nd Book: " << endl;
	cin >> b2.id>>b2.pages>>b2.price;
	
	cout << "The costly book is :" << endl;
	if(b1.price>b2.price)
	{
		cout << "ID: " << b1.id<< endl;
		cout << "Pages: " << b1.pages<< endl;
		cout << "Price: " << b1.price<< endl;
	}
	else
		cout << "Book ID: " << b2.id<< endl;
		cout << "Pages: " << b2.pages<< endl;
		cout << "Price: " << b2.price<< endl;
}
