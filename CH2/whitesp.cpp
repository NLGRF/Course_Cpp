#include <iostream>
int main()
{
	std::cout << "This is a really, really, really, really, really, really, really, " 
		<< "really long line" << std::endl; // one extra indentation for continuation line
		
	std::cout<<"This is another really, really, really, really, really, really, really, " 
		<< "really long line" << std::endl; // text aligned with the previous line for continuation line
		
	std::cout << "This one is short" << std::endl;
return 0;
}
