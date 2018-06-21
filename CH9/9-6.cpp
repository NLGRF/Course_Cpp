#include<iostream>
#include <string>
using namespace std;
 
class Course
{
   private:
     string subject1;
     string subject2;        
   public:
     Course()
     {
        subject1 = "";
        subject1 = "";
     }
     Course(string subj1, string subj2)
     {
        subject1 = subj1;
        subject2 = subj2;
     }
   void operator=(const Course &C ){
        subject1 = C.subject1;
        subject2 = C.subject2;
   }
   void Display(){
      cout << " Course in 1st Subject : " << subject1<< endl;;
      cout << " Course in 2nd Subject : " << subject2<< endl;;
  }   
};
int main()
{

   Course Student1("MA101", "CS101");
   Course Student2("SC102", "EN102"); 
   
   cout << " Course of first student1 : "<< endl;; 
   Student1.Display();
   cout << endl;

   cout << " Course of Second student2 : "<< endl;; 
   Student2.Display();
   cout << endl;
   
   Student1 = Student2;	
   cout << " Course of first student1 : "<< endl;; 
   Student1.Display();

   return 0;
}
