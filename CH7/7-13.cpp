#include <iostream>
using namespace std;

int fact(int num);

int main() 
{
    int num;
    cout<<" Enter a number to find factorial : ";
    cin >> num;
    cout << " Factorial of " << num <<" = " << fact(num);
    return 0;
}

int fact(int num) 
{
    if (num > 1) 
    {
        return num*fact(num-1);
    }
    else 
    {
        return 1;
    }
}
