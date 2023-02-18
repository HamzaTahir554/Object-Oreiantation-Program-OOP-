#include<iostream>
using namespace std;
struct point{
	int x[2];
};
struct line{
	point p[2];
};
struct triangle{
	line l1[3];
};

int main()
{
	triangle t = {{   {{{2,0},{6,7}}} ,
					   {{{5,6},{4,5}}} ,
						{{{6,4},{11,8}}}  }};
						
			cout<<t.l1[0].p[0].x[10];
						
						
	return 0;	
}
