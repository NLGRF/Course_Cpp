#include <iostream>
using namespace std;
class Shape
{
  protected:
	   float width, height;
  public:
	   void set_data (float a, float b)
	   {
		 this->width = a;
		 this->height = b;
	   }
};
class Rectangle: public Shape
{
  public:
 	 float area()
	 {
	  return (width * height);
	 }
};
int main ()
{
	Rectangle rect;
	float w, h;

	cout << "Enter width  : ";
    cin >> w;
    cout << "Enter length : ";
    cin >> h;
   								
	rect.set_data(w, h);

	cout << " Rectangle area " << rect.area() << endl;
	
	return 0;
}
