#include <iostream>
#include <cstring>
using namespace std;

 struct product {
  int ProtID;					 
  char ProName[50];
  float Price;
 } Product1, Product2;

int main()
{

Product1.ProtID = 112;
strcpy(Product1.ProName, "Coffee");
Product1.Price = 150.00;

Product2.ProtID = 113;
strcpy(Product2.ProName, "Ovaltine");
Product2.Price = 115.25;
cout << "Product1 ID    : " << Product1.ProtID <<endl;
cout << "Product1 Name  : " << Product1.ProName <<endl;
cout << "Product1 Price : " << Product1.Price <<endl;
cout <<endl;
cout << "Product2 ID    : " << Product2.ProtID <<endl;
cout << "Product2 Name  : " << Product2.ProName <<endl;
cout << "Product2 Price : " << Product2.Price <<endl;
  return 0;
}
