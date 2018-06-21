#include <iostream>
using namespace std;

void disp(int num);
void disp(double num);
void disp(char* word);

int main(void) {
	int x = 555; float y = 123.456; char str[] = "Hello C++";
   disp(x);
   disp(y);
   disp(str);
 
   return 0;
}
      void disp(int num) {
        cout << " Number int : " << num << endl;
      }
      void disp(double num) {
        cout << " Number float: " << num << endl;
      }
      void disp(char* word) {
        cout << " Character is : " << word << endl;
      }
