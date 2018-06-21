#include <iostream>  
using namespace std;  
class Shape{
  public:  
	  virtual void draw()	   
	{
		cout<<" drawing geometry..."<<endl;    
    }      
};   
class Rectangle: public Shape
{
 public:  
   void draw()
    {    
      cout<<" drawing rectangle..."<<endl;    
    }    
};  
class Triangle: public Shape
{    
 public:  
   void draw()
    {    
       cout<<" drawing triangle..."<<endl;    
    }    
};  
class Circle: public Shape
{    
 public:  
 void draw()
    {    
       cout<<" drawing circle..."<<endl;    
    }    
};  
int main(void) {  
    Shape *ptrs;
    Shape sh;

    Rectangle rec;
    Triangle tri;
    Circle cir;
    
    ptrs = &sh;
    ptrs ->draw();

	ptrs = &rec;
    ptrs ->draw();
	   
    ptrs=&tri;
    ptrs->draw();
    
	ptrs=&cir;
    ptrs->draw();
  return 0;
} 
