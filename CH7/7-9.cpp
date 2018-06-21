#include <iostream>
using namespace std;

void disp(int n[2][2][2]);

int main()
{
    int num[2][2][2] = {{{1, 2},{3, 4}},{{5, 6},{7, 8}}};
    disp(num);

    return 0;
}

void disp(int n[2][2][2])
{
 
    cout << " Display Numbers: " << endl;
    for(int x = 0;  x < 2; ++x)
    {	
		for(int y = 0;  y < 2; ++y)
    	{
        	for(int z = 0; z < 2; ++z)
        	{
            cout << " " << n[x][y][z];
        	}
    	}
	}
}
