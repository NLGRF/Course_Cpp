#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream writefile;
  int age;
  string Fname, Lname;

  writefile.open("example.txt");

  cout << "Please enter your first name : ";
  cin >> Fname;
  writefile << " First name : "<<Fname << endl;
  
  cout << "Please enter your last name : ";
  cin >> Lname;
  writefile << " Last name : "<<Lname<< endl;
   
  cout << "Please enter your age : ";
  cin >>age;
  writefile << "   Age : "<< age << endl;
  
  writefile.close();
 
  return 0;
}
