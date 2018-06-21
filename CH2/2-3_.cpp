#include <iostream>  		     // ไลบรารีรองรับการแสดงเอาต์พุตทางหน้าจอ
using namespace std;
int main ()
{
  int x = 150;					     // ประกาศตัวแปร x เก็บค่า 150	
  cout << “First sentence.”;         // แสดงข้อความส่วนแรก

								            // แสดงข้อความส่วนที่ 2 จบแล้วสั่งให้
  cout << “Second sentence.”<< endl; // ขึ้นบรรทัดใหม่ด้วย endl

									     // แสดงข้อความส่วนที่ 3 จบแล้วสั่งให้
  cout << “Third sentence.” << endl; // ขึ้นบรรทัดใหม่ด้วย endl	

  cout << “Output numberic “<<120 <<endl 	// แสดงข้อความส่วนที่ 4
     << “Output variable x “<<x<<”\n” 		// แสดงข้อความส่วนที่ 5
     << “Output variable x+50 is “<<x+50<<endl;// แสดงข้อความส่วนที่ 6
  return 0;
}
