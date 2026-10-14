#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accNumber;
    double balance;

public:
    // 1. Default Constructor (Takes no arguments)
    BankAccount() {
        name = "Not Set";
        accNumber = 0;
        balance = 0.0;
        cout << "[Default Constructor] Empty account created.\n";
    }

    // 2. Parameterized Constructor (Takes arguments)
    BankAccount(string n, int acc, double bal) {
        name = n;
        accNumber = acc;
        balance = bal;
        cout << "[Parameterized Constructor] Account created with user data.\n";
    }

    // 3. Copy Constructor (Initializes using an existing object)
    BankAccount(const BankAccount &obj) {
        name = obj.name;
        accNumber = obj.accNumber;
        balance = obj.balance;
        cout << "[Copy Constructor] Account copied successfully.\n";
    }

    void display() {
        cout << "Name: " << name << " | Acc No: " << accNumber << " | Balance: " << balance << "\n";
    }
};

int main() {
    string uName;
    int uAcc;
    double uBal;

    cout << "Enter account holder name: ";
    cin >> uName;
    cout << "Enter account number: ";
    cin >> uAcc;
    cout << "Enter initial balance: ";
    cin >> uBal;

    cout << "\n--- Constructor Executions ---\n";
    
    BankAccount acc1; // Triggers Default
    BankAccount acc2(uName, uAcc, uBal); // Triggers Parameterized
    BankAccount acc3(acc2); // Triggers Copy

    cout << "\n--- Account Details ---\n";
    acc1.display();
    acc2.display();
    acc3.display();

    return 0;
}


/*

gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit constructors_types.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ constructors_types.cpp -o const
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./const
Enter account holder name: leanor
Enter account number: 129040020
Enter initial balance: 12000

--- Constructor Executions ---
[Default Constructor] Empty account created.
[Parameterized Constructor] Account created with user data.
[Copy Constructor] Account copied successfully.

--- Account Details ---
Name: Not Set | Acc No: 0 | Balance: 0
Name: leanor | Acc No: 129040020 | Balance: 12000
Name: leanor | Acc No: 129040020 | Balance: 12000
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$

*/
