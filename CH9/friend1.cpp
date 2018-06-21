#include <iostream>
 
using namespace std;
 
class rectangle {
   double width, height;
   
   public:
      friend double area(rectangle rec);
      void setVal( double w, double h);
};

// Member function definition
void rectangle::setVal(double w, double h) {
   width = w;
   height = h;
}

// Note: printWidth() is not a member function of any class.
double area(rectangle rec) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   return rec.width * rec.height;
}
 
// Main function for the program
int main() {
   rectangle rec1;
 
   // set box width without member function
   rec1.setVal(4.0, 6.0);  
   cout << " Area of rectangle is : " << area(rec1);
   return 0;
}
