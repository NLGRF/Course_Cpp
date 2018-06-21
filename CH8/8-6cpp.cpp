#include <iostream>
#include <string>
using namespace std;

class Grade
{
		int num;
		string name;
	public:
		Grade(string student);
		Grade(int point, string sub);
};
	
	Grade::Grade(string student): name(student){
	cout << " Student name is : " << name << endl; 
	}
	Grade::Grade(int point, string sub):num(point), name(sub){
	cout << " Point of subject : " << name << endl; 
	if(point<50){
		cout << " Point : " << point << " is Failed" << endl;
	}
	else cout << " Point : " << point << " is Passed" << endl;
	}
	
	int main ()
{
	Grade A("Somchai");
	Grade B(65, "Math");
	return 0;	
}

