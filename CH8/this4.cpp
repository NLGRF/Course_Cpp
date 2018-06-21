 #include <iostream> 
using namespace std;

class rec {   
	private:
      double width;     
      double height;     
	public:
      rec(double w = 5.0, double h = 5.0) {
         width = w;
         height = h;
      }
      double area() {
         return width * height;
      }
      int compare(rec REC) {
         return this->area() > REC.area();
      }
};

int main(void) {
   rec recA(6.0, 4.0);    // Declare box1
   rec recB(3.0, 2.0);    // Declare box2

   if(recA.compare(recB)) {
      cout << "recB is smaller than recA" <<endl;
   } else {
      cout << "recB is equal to or larger than rec" <<endl;
   }

		return 0;
}

