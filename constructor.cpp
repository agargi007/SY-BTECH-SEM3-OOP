#include <iostream>
using namespace std;
class Rectangle;

class Circle {
private:
    double radius;

public:
    Circle(double rad) {
        radius = rad;
    }

    double getArea() {
        return 3.14* radius * radius;
    }

    double getPerimeter() {
        return 2 * 3.14* radius;
    }

    friend void compareAreas(Circle circle,  Rectangle rect);
};

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    double getArea() {
        return length * width;
    }

    double getPerimeter() {
        return 2 * (length + width);
    }

    friend void compareAreas(Circle circle, Rectangle rect);
};

void compareAreas(Circle circle, Rectangle rect) {
    double areaCircle = 3.14* circle.radius * circle.radius;
    double areaRect = rect.length * rect.width;

    cout << "\nComparing Areas " << endl;
    if (areaCircle > areaRect) {
        cout << "The circle is bigger (" << areaCircle << " vs " << areaRect << ")" << endl;
    } else if (areaRect > areaCircle) {
        cout << "The rectangle is bigger (" << areaRect << " vs " << areaCircle << ")" << endl;
    } else {
        cout << "They are the exact same size." << endl;
    }
}

int main() {
    Circle circle(5.0);           
    Rectangle rect(4.0, 6.0); 

    cout << "Circle Area: " << circle.getArea() << endl;
    cout << "Circle Perimeter: " << circle.getPerimeter() << endl;
    
    cout << "Rectangle Area: " << rect.getArea() << endl;
    cout << "Rectangle Perimeter: " << rect.getPerimeter() << endl;

    compareAreas(circle, rect);

    return 0;
}
