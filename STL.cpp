#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> grades;
    int n, grade;
    
    cout << "How many grades will you enter? ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;
        grades.push_back(grade);
    }

    if (grades.empty()) return 0;

    int sum = 0;
    int minG = grades[0], maxG = grades[0];
    
    // Using iterators
    for (auto it = grades.begin(); it != grades.end(); ++it) {
        sum += *it;
        if (*it < minG) minG = *it;
        if (*it > maxG) maxG = *it;
    }

    cout << "\nAverage: " << (float)sum / n << endl;
    cout << "Maximum Grade: " << maxG << endl;
    cout << "Minimum Grade: " << minG << endl;
    
    return 0;
}

/*
gargi_007@LAPTOP-113399:/mnt/e/SY-BTECH-SEM3/Programming$ ./stl
How many grades will you enter? 5
Enter grade 1: 9
Enter grade 2: 4
Enter grade 3: 7
Enter grade 4: 9
Enter grade 5: 9

Average: 7.6
Maximum Grade: 9
Minimum Grade: 4

*/
