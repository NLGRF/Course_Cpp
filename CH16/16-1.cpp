#include <iostream>
using namespace std; 

int main()
{
    int *p = new int(8);
    cout << " Value is : " << *p << endl;
    delete p;
}
