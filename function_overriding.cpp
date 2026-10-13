#include <iostream>
using namespace std;

class Shape {
public:
    // Virtual function enables runtime polymorphism
    virtual void calculateArea() {
        cout << "Base Shape area calculation." << endl;
    }
};

class Circle : public Shape {
private:
    float r;
public:
    void calculateArea() override {
        cout << "Enter circle radius: ";
        cin >> r;
        cout << "Circle Area: " << 3.14159 * r * r << endl;
    }
};

class Rectangle : public Shape {
private:
    float l, w;
public:
    void calculateArea() override {
        cout << "Enter rectangle length and width: ";
        cin >> l >> w;
        cout << "Rectangle Area: " << l * w << endl;
    }
};

int main() {
    int choice;
    Shape* shapePtr; 
    Circle c;
    Rectangle r;

    cout << "Calculate area for:\n1. Circle\n2. Rectangle\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        shapePtr = &c; // Point to Circle
    } else if (choice == 2) {
        shapePtr = &r; // Point to Rectangle
    } else {
        cout << "Invalid choice." << endl;
        return 1;
    }

    // Resolves at runtime based on what shapePtr is pointing to
    shapePtr->calculateArea(); 

    return 0;
}

/*

gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit function_overriding.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ function_overriding.cpp -o override
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./override
Calculate area for:
1. Circle
2. Rectangle
Enter choice: 1
Enter circle radius: 12
Circle Area: 452.389
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./override
Calculate area for:
1. Circle
2. Rectangle
Enter choice: 2
Enter rectangle length and width: 11
16
Rectangle Area: 176
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$

*/

