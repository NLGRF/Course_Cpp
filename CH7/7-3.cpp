#include <iostream>
#include <string>
using namespace std;

void changeName();
string name;

int main()
{
	string myname = "Narong";
	name = myname;
	cout << "Begin, My name is : " << myname 
	<< "\t\tGlobal name is : " 	<< name << endl;
	changeName();
	string name = "Tanong";
	cout << "After change, My name is : " << name 
	<< "\tGlobal name is : " << ::name << endl;	
	return(0);
}

void changeName() {
	string myname = "Patee";
	cout << "Before change, My name is : " << myname 
	<< "\tGlobal name is : " << name << endl;
	name = myname;
	cout << "Change name, My name is : " << myname 
	<< "\t\tGlobal name is : " << name << endl;
}
