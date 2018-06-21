#include <iostream>
using namespace std;
 	int main () {
	int a =10;
  	int b =20;
  	int *pt;
  	pt = &a;
   	cout << " Address of  a is " <<pt<< " value of a is "<<*pt<< endl;
   	cout << " Address of  b is " << &b <<" value of b is "<< b << endl; 
	cout << " Address of pt is " << &pt << endl;
  	return 0;
}

