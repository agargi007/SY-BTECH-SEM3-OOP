#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    void inputName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
protected:
    int rollNo;
public:
    void inputRoll() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Result : public Student {
private:
    float marks;
public:
    void inputResult() {
        inputName();
        inputRoll();
        cout << "Enter total marks: ";
        cin >> marks;
    }
    void display() {
        cout << "\n--- Final Result ---\n";
        cout << "Name: " << name << "\nRoll No: " << rollNo << "\nMarks: " << marks << endl;
    }
};

int main() {
    Result r;
    r.inputResult();
    r.display();
    return 0;
}

/*
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit multilevel.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ multilevel.cpp -o inherit2
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./inherit2
Enter name: leanor
Enter roll number: 1
Enter total marks: 15

--- Final Result ---
Name: leanor
Roll No: 1
Marks: 15

*/

