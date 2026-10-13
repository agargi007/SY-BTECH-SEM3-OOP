#include <iostream>
using namespace std;

class rectangle
{
    int l, b;

public:
    rectangle()
    {
        l = 1;
        b = 1;
    }

    rectangle(int x, int y)
    {
        l = x;
        b = y;
    }

    rectangle operator +(rectangle rec)
    {
        rectangle r;
        r.l = l + rec.l;
        r.b = b + rec.b;
        return r;
    }

    void display(void);
};

void rectangle::display(void)
{
    cout << "the length is : " << l << endl;
    cout << "the breadth is : " << b << endl;
}

int main()
{
    rectangle r1, r2, r3;

    r1 = rectangle();
    r2 = rectangle(13, 24);
    r3 = r1 + r2;

    cout << "\nrectangle 1 :\n";
    r1.display();

    cout << "\nrectangle 2 :\n";
    r2.display();

    cout << "\nrectangle 3 :\n";
    r3.display();

    return 0;
}
