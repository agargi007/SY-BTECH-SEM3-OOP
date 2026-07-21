#include <iostream>
using namespace std;

void circle_area()
{
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    double area = 3.14 * r * r;
    cout << "Area of circle is: " << area << endl;
}

void rectangle_area()
{
    int l, b;
    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    int area = l * b;
    cout << "Area of rectangle is: " << area << endl;
}

void triangle_area()
{
    int base, height;
    cout << "Enter base: ";
    cin >> base;

    cout << "Enter height: ";
    cin >> height;

    double area = (base * height) / 2.0;
    cout << "Area of triangle is: " << area << endl;
}

int main()
{
    int choice;

    while (true)
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            circle_area();
            break;

        case 2:
            rectangle_area();
            break;

        case 3:
            triangle_area();
            break;

        case 4:
            cout << "Exiting program..." << endl;
            return 0;

        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
