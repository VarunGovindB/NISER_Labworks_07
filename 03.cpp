#include <iostream>
using namespace std;

class rectangle
{
	public:
	int length;
	int breadth;
	int area(void)
	{
	
		return length*breadth;
	}
	int perimeter(void)
	{
	
		return 2*(length+breadth);
	}
};

int main() 
{
	int l1,l2,b1,b2,area1,area2,perimeter1,perimeter2;
	cin>>l1>>b1>>l2>>b2;
rectangle akil;
akil.length=l1;
akil.breadth=b1;
area1=akil.area();
perimeter1=akil.perimeter();
akil.length=l2;
akil.breadth=b2;
area2=akil.area();
perimeter2=akil.perimeter();
cout<<area1<<endl;
cout<<area2<<endl;
cout<<perimeter1<<endl;
cout<<perimeter2<<endl;

if(area1>area2)
cout<<"area1>area2";
else
cout<<"area1<area2";

if(perimeter1>perimeter2)
cout<<"perimeter1>perimeter2";
else
cout<<"perimeter1<perimeter2";

return 0;
}
