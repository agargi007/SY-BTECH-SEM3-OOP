#include <iostream>
using namespace std;

class Academics {
protected:
    float academicScore;
public:
    void inputAcademics() {
        cout << "Enter academic score (out of 100): ";
        cin >> academicScore;
    }
};

class Sports {
protected:
    float sportsScore;
public:
    void inputSports() {
        cout << "Enter sports score (out of 100): ";
        cin >> sportsScore;
    }
};

// Inherits from BOTH Academics and Sports
class Result : public Academics, public Sports {
public:
    void calculateTotal() {
        inputAcademics();
        inputSports();
        float total = academicScore + sportsScore;
        cout << "\n--- Total Performance ---\n";
        cout << "Total Score: " << total << " / 200" << endl;
    }
};

int main() {
    Result r;
    r.calculateTotal();
    return 0;
}

/*

gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ gedit multiple_inheritance.cpp
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ multiple_inheritnace.cpp -o inherit3
cc1plus: fatal error: multiple_inheritnace.cpp: No such file or directory
compilation terminated.
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ g++ multiple_inheritance.cpp -o inherit3
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./inherit3
Enter academic score (out of 100): 97
Enter sports score (out of 100): 78

--- Total Performance ---
Total Score: 175 / 200

*/

