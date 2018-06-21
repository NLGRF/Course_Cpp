#include <iostream>
using namespace std;
const float pi = 3.14;
class Shape
{
  protected:
	   float width, height, radius;
  public:
	   void set_data (float a, float b,float c)
	   {
		 this->width = a;
		 this->height = b;
		 this->radius = c;
	   }
};
class Rectangle: public Shape
{
  public:
 	 float area ()
	 {
	  return (width * height);
	 }
};
class Triangle: public Shape
{
 public:
	float area ()
	{
	 return (width*height / 2);
	}
};
class Circle: public Shape
{
 public:
	float area ()
	{
	 return (pi * radius * radius);
	}
};
int main ()
{
	Rectangle rect;
	Triangle tri;
	Circle crl;	
	float w, h, r;

	cout << "Enter width  : ";
    cin >> w;
    cout << "Enter length : ";
    cin >> h;
    cout << "Enter radius : ";
    cin >> r;

	rect.set_data (w, h, r);
	tri.set_data (w, h, r);
	crl.set_data (w, h, r);

	cout << " Rectangle area " << rect.area() << endl;
	cout << " Triangle area  "<< tri.area() << endl;
	cout << " Circle  area   "<< crl.area() << endl;
	
	return 0;
}
