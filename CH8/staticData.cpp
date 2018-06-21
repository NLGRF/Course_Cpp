#include <iostream>
 
using namespace std;

class data {
   public:
      static int val;
      
      data(void) {
         cout <<"Constructor called, value is :" << val << endl;
         val++;
      }
};

int data::val = 2;

int main(void) {
 	data d1;
 	data d2;
   	cout << "Total value : " << data::val << endl;
   	return 0;
}
