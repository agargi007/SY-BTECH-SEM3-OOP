#include <iostream>
#include <string>
using namespace std;

// Base Class
class Account {
protected:
    string holderName;
    double balance;
public:
    void inputBaseDetails() {
        cout << "Enter account holder name: ";
        cin >> holderName;
        cout << "Enter initial balance: ";
        cin >> balance;
    }
};

// Derived Class 1
class SavingsAccount : public Account {
private:
    double interestRate;
public:
    void inputSavingsDetails() {
        cout << "\n--- Setup Savings Account ---\n";
        inputBaseDetails(); // Call base class method
        cout << "Enter interest rate (%): ";
        cin >> interestRate;
    }
    void displaySavings() {
        cout << "Savings Account -> Name: " << holderName 
             << " | Balance: " << balance 
             << " | Interest Rate: " << interestRate << "%\n";
    }
};

// Derived Class 2
class CurrentAccount : public Account {
private:
    double overdraftLimit;
public:
    void inputCurrentDetails() {
        cout << "\n--- Setup Current Account ---\n";
        inputBaseDetails(); // Call base class method
        cout << "Enter overdraft limit: ";
        cin >> overdraftLimit;
    }
    void displayCurrent() {
        cout << "Current Account -> Name: " << holderName 
             << " | Balance: " << balance 
             << " | Overdraft Limit: " << overdraftLimit << "\n";
    }
};

int main() {
    SavingsAccount savings;
    CurrentAccount current;

    // Both objects use their own inherited copy of the base class data
    savings.inputSavingsDetails();
    current.inputCurrentDetails();

    cout << "\n--- Final Bank Summary ---\n";
    savings.displaySavings();
    current.displayCurrent();

    return 0;
}

/*

gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit hierarchical_inheritance.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ hierarchical_inheritance.cpp -o hierarchy
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./hierarchy

--- Setup Savings Account ---
Enter account holder name: leanor
Enter initial balance: 129000
Enter interest rate (%): 10

--- Setup Current Account ---
Enter account holder name: liza
Enter initial balance: 300000
Enter overdraft limit: 12000

--- Final Bank Summary ---
Savings Account -> Name: leanor | Balance: 129000 | Interest Rate: 10%
Current Account -> Name: liza | Balance: 300000 | Overdraft Limit: 12000
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$

*/
