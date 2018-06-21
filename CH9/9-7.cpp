#include <iostream>
using namespace std;

class Point {
  private:
    int x, y;
	public:
  	  Point() {
  		x = 5;
  	  	y = 5;
  }
  Point operator()(int dx, int dy){
    x += dx;
    y += dy;
    return *this;
  }
  void display()
  {
 	 cout << " x : " << x << " y :" << y << endl;
	}
};
int main() {
  Point pt;
  pt.display();
  
  pt(3, 2);
  pt.display();
  
  return 0;
}
