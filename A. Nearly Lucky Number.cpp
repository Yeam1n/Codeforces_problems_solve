#include <iostream>
using namespace std;

// Function to check if a number is lucky
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        if (digit != 4 && digit != 7) {
            return false; // If a digit is not 4 or 7, it's not lucky
        }
        num /= 10; // Remove the last digit
    }
    return true; // All digits are lucky
}

int main() {
    string n;
    cin >> n;

    int luckyCount = 0;

    // Count the lucky digits in the input number
    for (char c : n) {
        if (c == '4' || c == '7') {
            luckyCount++;
        }
    }

    // Check if the count itself is a lucky number
    if (isLucky(luckyCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
