#include <iostream>
 
using namespace std;

class data {
   public:
      static int val;
      
      data() {
         cout <<"Constructor called" << endl;
         val++;
      }
      static int getVal() {return val;}
};

int data::val = 2;

int main(void) {
 	cout << "Initail value : " << data::getVal() << endl;
	data d1;
 	data d2;
   	cout << "Total value : " << data::getVal() << endl;
   	return 0;
}
