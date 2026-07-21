#include <iostream>
using namespace std;

class Circle {
private:
    double r; // Using double is safer for radius since it interacts with pi

public:
    void getDimensions() {
        cout << "Enter the radius of the circle: ";
        cin >> r;
    }

    void calculateAndDisplayArea() {
        double area = 3.14 * r * r;
        cout << "Area of circle is: " << area << endl;
    }
};

class Rectangle {
private:
    int l, b;

public:
    void getDimensions() {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;
    }

    void calculateAndDisplayArea() {
        int area = l * b;
        cout << "Area of rectangle is: " << area << endl;
    }
};

class Triangle {
private:
    int base, height;

public:
    void getDimensions() {
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
    }

    void calculateAndDisplayArea() {
        double area = (base * height) / 2.0;
        cout << "Area of triangle is: " << area << endl;
    }
};

int main() {
    int choice;
    
    while (true) {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                Circle c;
                c.getDimensions();
                c.calculateAndDisplayArea();
                break;
            }
            case 2: {
                Rectangle r;
                r.getDimensions();
                r.calculateAndDisplayArea();
                break;
            }
            case 3: {
                Triangle t;
                t.getDimensions();
                t.calculateAndDisplayArea();
                break;
            }
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
