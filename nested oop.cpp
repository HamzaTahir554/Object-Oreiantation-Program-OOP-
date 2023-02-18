#include<iostream>
using namespace std;

struct point
{
	int x,y;
};
point p;
struct line
{
	point p1,p2;
};
line l;
struct tri
{
	line l1,l2,l3;
};
tri t;
int main()
{
	point p ={4,11};
	line l={{5,6},{7,4} };
	tri t = { {{1,2},{3,4}}, {{5,6},{7,8}}, {{9,10},{11,12}} };
	cout<<"Point : "<<p.x<<","<<p.y<<endl;
	cout<<"Line L : "<<l.p1.x<<","<<l.p1.y<<","<<l.p2.x<<","<<l.p2.y<<endl;
	cout<<"Triangle Line 1: {{"<<t.l1.p1.x<<","<<t.l1.p1.y<<"},{"<<t.l1.p2.x<<","<<t.l1.p2.y<<"}}"<<endl;
	cout<<"Triangle Line 2: {{"<<t.l2.p1.x<<","<<t.l2.p1.y<<"},{"<<t.l2.p2.x<<","<<t.l2.p2.y<<"}}"<<endl;
	cout<<"Triangle Line 3: {{"<<t.l3.p1.x<<","<<t.l3.p1.y<<"},{"<<t.l3.p2.x<<","<<t.l3.p2.y<<"}}"<<endl;
}
