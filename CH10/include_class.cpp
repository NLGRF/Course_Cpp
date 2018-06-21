#include <iostream>
#include "Class_file.cpp"	  
using namespace std;

class Rectangle: public Shape
{
  public:
	 float area ()
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
    cout << "Enter height : ";
    cin >> h;
	rect.set_data (w, h);

	cout << " Rectangle area " << rect.area() << endl;
	return 0;
}
