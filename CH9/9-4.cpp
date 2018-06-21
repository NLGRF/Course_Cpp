#include <iostream>
using namespace std;

class Complex
{
  private:
    int real, imag;
  public:
    Complex(int r = 0, int i =0)
    {  
      real = r;
      imag = i;
    }

    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
 };

 ostream & operator << (ostream &output, const Complex &c)
 {
    output << c.real;
    output << "+i" << c.imag << endl;
  return output;
}

istream & operator >> (istream &input, Complex &c)
{
    cout << "Enter Real number ";
    input >> c.real;
    cout << "Enter imaginary number ";
    input >> c.imag;
  return input;
}
 int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
  return 0;
}
