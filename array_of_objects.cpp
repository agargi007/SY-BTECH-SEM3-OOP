#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void getData() {
        cout << "Enter Name and Roll No: ";
        cin >> name >> roll;
    }

    void display() {
        cout << "Name: " << name << " | Roll No: " << roll << endl;
    }
};

int main() {
    // Declaring an Array of 3 Student Objects
    Student s[3]; 

    cout << "--- Enter Details ---" << endl;
    for (int i = 0; i < 3; i++) {
        s[i].getData(); // Calling function for each object
    }

    cout << "\n--- Student Records ---" << endl;
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}

/*

gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit array_of_objects.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ array_of_objects.cpp -o arr
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./arr
--- Enter Details ---
Enter Name and Roll No: leanor
24
Enter Name and Roll No: lizzy
13
Enter Name and Roll No: daniel
9

--- Student Records ---
Name: leanor | Roll No: 24
Name: lizzy | Roll No: 13
Name: daniel | Roll No: 9
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$


*/

