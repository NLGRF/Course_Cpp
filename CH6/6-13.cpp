#include <iostream>
using namespace std;
int main () 
{
	enum Color { black, blue, green };
	Color c = blue;
	switch(c)
	{
    case black : cout << " Car is black color\n"; break;
    case blue: cout << " Car is blue color\n"; break;
    case green : cout << " Car is green color\n"; break;
	}
    return 0;
}
