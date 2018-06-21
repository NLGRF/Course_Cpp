#include <iostream>
using namespace std;
class square;
class rectangle {
    int width, height;
  public:
    double area ()
      {return (width * height);}
    void convert (square sq);
};

class square {
  friend class rectangle;
    int side;
  public:
    square (int s) : side(s) {}
};

void rectangle::convert (square sq) {
  width = sq.side;
  height = sq.side;
}
  
int main () {
  rectangle rec;
  square sq(6.0);
  rec.convert(sq);
  cout << " Area is " << rec.area();
  return 0;
}
