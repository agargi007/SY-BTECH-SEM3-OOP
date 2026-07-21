#include <iostream>
#include <memory>
#include <iomanip>

class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const = 0;
};

class Rectangle : public Shape {
    double len_{};
    double bred_{};
public:
    Rectangle(double len, double bred) : len_(len), bred_(bred) {}
    double area() const override { return len_ * bred_; }
};

class Square : public Shape {
    double side_{};
public:
    explicit Square(double side) : side_(side) {}
    double area() const override { return side_ * side_; }
};

class Triangle : public Shape {
    double base_{};
    double height_{};
public:
    Triangle(double base, double height) : base_(base), height_(height) {}
    double area() const override { return 0.5 * base_ * height_; }
};

class Circle : public Shape {
    double radius_{};
public:
    explicit Circle(double radius) : radius_(radius) {}
    double area() const override { return 3.14159265358979323846 * radius_ * radius_; }
};

int main() {
    int choice = 0;
    std::cout << "Enter shape (1=Rectangle, 2=Square, 3=Triangle, 4=Circle): ";
    std::cin >> choice;

    std::unique_ptr<Shape> shape;

    switch (choice) {
        case 1: {
            double l, b;
            std::cout << "Enter length and breadth of rectangle: ";
            std::cin >> l >> b;
            shape = std::make_unique<Rectangle>(l, b);
            break;
        }
        case 2: {
            double a;
            std::cout << "Enter length of square: ";
            std::cin >> a;
            shape = std::make_unique<Square>(a);
            break;
        }
        case 3: {
            double h, w;
            std::cout << "Enter base and height of triangle: ";
            std::cin >> w >> h; // keep same user ordering as prompt base/height
            shape = std::make_unique<Triangle>(w, h);
            break;
        }
        case 4: {
            double r;
            std::cout << "Enter radius of circle: ";
            std::cin >> r;
            shape = std::make_unique<Circle>(r);
            break;
        }
        default:
            std::cout << "Invalid choice.\n";
            return 0;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area = " << shape->area() << std::endl;
    return 0;
}

