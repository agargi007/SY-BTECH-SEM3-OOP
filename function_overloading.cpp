#include <iostream>
using namespace std;

class MathOperations {
public:
    // Overloaded function for integers
    void calculate(int a, int b) {
        cout << "Integer Addition: " << a + b << endl;
    }
    
    // Overloaded function for floats
    void calculate(float a, float b) {
        cout << "Float Multiplication: " << a * b << endl;
    }
};

int main() {
    MathOperations math;
    int x, y;
    float f1, f2;

    cout << "Enter two integers to add: ";
    cin >> x >> y;
    math.calculate(x, y); // Calls the int version

    cout << "Enter two decimals to multiply: ";
    cin >> f1 >> f2;
    math.calculate(f1, f2); // Calls the float version

    return 0;
}

/*

gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit function_overloading.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ function_overloading.cpp -o poly1
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./poly1
Enter two integers to add: 12
42
Integer Addition: 54
Enter two decimals to multiply: 12
11
Float Multiplication: 132
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$

*/

