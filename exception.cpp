#include <iostream>
using namespace std;

int main() {
    int num, den;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;
    
    try {
        if (den == 0) throw "Division by zero is not allowed!";
        cout << "Result: " << (float)num / den << endl;
    } 
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    
    return 0;
}

/*

gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit exception.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ exception.cpp -o excep
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./excep
Enter numerator: 19
Enter denominator: 0
Exception caught: Division by zero is not allowed!
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./excep
Enter numerator: 5
Enter denominator: 10
Result: 0.5
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$

*/
