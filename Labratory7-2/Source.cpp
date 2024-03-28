#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool allSame(int a, int b, int c) {
    return (a == b) && (b == c);
}


bool allDifferent(int a, int b, int c) {
    return (a != b) && (b != c) && (a != c);
}


bool isSorted(int a, int b, int c) {
    return (a <= b) && (b <= c);
}

int main() {
    int num1, num2, num3;

    while (true) {
        cout << "Enter three numbers separated by space or 'Q' to quit: ";
        string input;
        cin >> input;

        if (input == "Q" || input == "q") {
            break;
        }

       
        num1 = stoi(input);
        cin >> num2 >> num3;

        
        if (allSame(num1, num2, num3)) {
            cout << "Numbers are all the same." << endl;
        }
        else {
            cout << "Numbers are not all the same." << endl;
        }

        
        if (allDifferent(num1, num2, num3)) {
            cout << "Numbers are all different." << endl;
        }
        else {
            cout << "Numbers are not all different." << endl;
        }

        
        int sortedNums[3] = { num1, num2, num3 };
        sort(sortedNums, sortedNums + 3);

     
        if (isSorted(sortedNums[0], sortedNums[1], sortedNums[2])) {
            cout << "Numbers are sorted." << endl;
        }
        else {
            cout << "Numbers are not sorted." << endl;
        }
    }

    return 0;
}
