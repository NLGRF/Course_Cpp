#include <iostream>
#include <ctime>
using namespace std;
int main() {
	time_t t = time(0);
	char* dt = ctime(&t);
	struct tm *now = localtime(&t);
	cout << "Current date and time is: " << dt;
   	cout << "Local date and time is " << now->tm_mday << '-'
        << (1 + now->tm_mon) << '-'
        << (now->tm_year + 1900) << " "
 		<< now->tm_hour << ":"
        << now->tm_min << ":"
	    << now->tm_sec
		<< endl;   
   cout << "also the day of year is " << (now->tm_yday) << "\n"
        << "Weekday is " << (now->tm_wday)<< endl;
   return 0;  
}
