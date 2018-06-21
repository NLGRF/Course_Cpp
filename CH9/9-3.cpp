#include <iostream>
using namespace std;
class Relational
{
   private:
      int X, Y;
   public:
       Relational(int a, int b) {
       	X = a;
       	Y = b;
       }
  	 	bool operator<(Relational R){
 
         if ((X < R.X) && (Y < R.Y)){
             return true;
         }
      else {
         return false;
     }
   }
};
int main ()
{
 Relational object1(7, 8), object2(9, 12);

 if(object1 < object2)
 {
   cout << "object1 Values 7, 8 Less than object2 Values 9, 12 \n" ;
 }
 else
 {
   cout << "object1 Values 7, 8 Greater than object2 Values 9, 12 \n";
 }
	
	return 0;
}
