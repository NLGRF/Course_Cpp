#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream readfile;
 
  	readfile.open("example.txt");
  
   while(getline(readfile,line))
   {
     cout << line << '\n';
   }
    readfile.close();

  return 0;
}
