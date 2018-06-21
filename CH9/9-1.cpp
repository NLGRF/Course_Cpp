#include <iostream>
using namespace std;

class Rectangle
{
  public:
    float Width; 	 
    float Length;
    Rectangle operator +(const Rectangle& rect); 
    float area(void);
};
float Rectangle::area(void)
{    
   return (Width * Length);
}
Rectangle Rectangle::operator+(const Rectangle& rec)
{    
   Rectangle rect;
   rect.Width = this->Width + rec.Width;
   rect.Length = this->Length + rec.Length;
  return rect;
}
int main ()
{
 Rectangle rect1, rect2, rect3;

   rect1.Width = 2.0;
   rect1.Length = 3.0;
	cout <<" Rectangle1 area "<<rect1.area()<< endl;

   rect2.Width = 3.0;
   rect2.Length =4.0;
  	cout <<" Rectangle2 area "<<rect2.area()<< endl;

   rect3 = rect1 + rect2;

   cout <<" Rectangle3 area "<< rect3.area()<< endl;
	
	return 0;
}
