#include <iostream>
 using namespace std;

inline int max(int a, int b) {
   return (a > b)? a : b;
}

int main() {
   cout << " Maximun of 40, 60 is " << max(40,60) << endl;
   cout << " Maximun of 120, 80 is " << max(120,80)<< endl;
   cout << " Maximun of 900, 1002 is " << max(900,1002) << endl;
   
   return 0;
}
