#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int roll;
    
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    
    // Write to file
    ofstream outFile("student.txt");
    outFile << name << "\n" << roll;
    outFile.close();
    
    // Read from file
    string readName;
    int readRoll;
    ifstream inFile("student.txt");
    inFile >> readName >> readRoll;
    inFile.close();
    
    cout << "\n--- Data Read from File ---\n";
    cout << "Name: " << readName << "\nRoll No: " << readRoll << endl;
    return 0;
}

/*

gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit file_handling.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ file_handling.cpp -o file
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./file
Enter student name: lee
Enter roll number: 1

--- Data Read from File ---
Name: lee
Roll No: 1
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$

*/
