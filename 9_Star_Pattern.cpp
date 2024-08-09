#include <iostream>
using namespace std;

void printPattern(int N) {
    // Upper part including the middle line
    for (int i = 1; i <= N / 2 + 1; ++i) {
        // Print leading spaces
        int spaces = (N / 2) - (i - 1);
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }
        // Print stars
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    // Lower part
    for (int i = N / 2; i >= 1; --i) {
        // Print leading spaces
        int spaces = (N / 2) - (i - 1);
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }
        // Print stars
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T; // Number of test cases

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N; // Read N for each test case
        printPattern(N);
    }

    return 0;
}