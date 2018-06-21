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
    }
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

   Rect.setWH(w, h);
   cout << " Rectangle area: " << Rect.getArea() << endl;

   Tri.setWH(w, h);
    cout << " Triangle area: " << Tri.getArea() << endl;


   Cir.setR(r);
   cout << " Circle area: " << Cir.getArea() << endl;

  return 0;
}
