#include <iostream>  
using namespace std;

class Shape	
{
  protected:
	   float width;
	   float height;
	   float radius;
  public:
    virtual float getArea() = 0;

    void setWH(float w,float h){
		width = w;
		height = h;
    }
    void setR(float r){
	   radius = r;
    };
};
class Rectangle: public Shape
{
  public:
   float getArea(){				
    return (width * height);
  }
};
class Triangle: public Shape
{
  public:
	 float getArea(){
     return (width * height)/2;
   }
};
class Circle: public Shape {
 public:  
   float getArea(){    
     return (3.14*radius*radius);
  }    
};  
int main()
{
	Shape *ptr;
	Rectangle Rect;
	Triangle Tri;
   Circle Cir;
  	float w, h, r;

	cout << " Enter width  : ";
    cin >> w;
    cout << " Enter height : ";
    cin >> h;
    cout << " Enter radius : ";
    cin >> r;

   ptr = &Rect;
   ptr->setWH(w, h);
   cout << " Rectangle area: " << ptr->getArea() << endl;

  ptr = &Tri;
  ptr->setWH(w, h);
  cout << " Triangle area: " << ptr->getArea() << endl;

   ptr = &Cir;
   ptr->setR(r);	
   cout << " Circle area: " << ptr->getArea() << endl;

  return 0;
}
