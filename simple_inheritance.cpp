#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
private:
    int rollNo;
public:
    void inputStudent() {
        inputPerson(); // Call base class method
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << "\nRoll No: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    s.display();
    return 0;
}
