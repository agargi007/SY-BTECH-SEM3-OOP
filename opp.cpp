#include <iostream>
using namespace std;

class area
{
	private:
		int l;
		int b;
		int A;
		
	public:
		void rectangle()
		{
			
			cout<<"enter the length:"<<l<<endl;
			cin>>l;
			
			cout<<"enter the breadth:"<<b<<endl;
			cin>>b;
			
			A= l * b;
			cout<<"the area of rectangle is :" << A<<endl;
			
		}
		
};

int main()
{
	area a1;
	a1.rectangle();
	
	return 0;
}
			
