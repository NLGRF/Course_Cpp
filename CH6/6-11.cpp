#include <iostream>
#include <cstring>
using namespace std;
	struct product { 
  	int ID;
  	string Name;
  	float  Price;
	};

int main( )
{
   	product *ptr, book;
   	ptr = &book;
   	cout << " Enter number of ID : ";
   	cin >> ptr->ID;
	cout << " Enter Name of Product : ";
	cin >> ptr->Name;
	cout << " Enter number of Prices : ";
	cin >> ptr->Price;
	cout << " Address structer : " << ptr << endl;
	cout << " Product ID       : " << (*ptr).ID << endl;
	cout << " Product Name     : " << (*ptr).Name << endl;
	cout << " Price            : " << (*ptr).Price << endl;
	return 0;
}
