#include <iostream>
using namespace std;

class box
{
	private:
		double l;
		double w;
		double h;
	public:
		void getData()
		{
			cout << "enter length, breadth and height: ";
			cin >> l >> w >> h;
		}
		double volume()
		{
			return l * w * h;
		}
};

int main()
{
	box b1;
	box b2;
	
	cout << "box 1" << endl;
	b1.getData();
	cout << " the volume of box is :" << b1.volume() << endl;
	
	cout << "box 2" << endl;
	b2.getData();
	cout << " the volume of box is :" << b2.volume() << endl;
	
	return 0;
}
