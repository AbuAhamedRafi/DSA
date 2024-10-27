#include <iostream>
using namespace std;
int reverseInteger(int n) {
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;         // Get the last digit of n
        n /= 10;                    // Remove the last digit from n

        // Check for overflow or underflow before updating reversed
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            cout << "Overflow! Cannot reverse the number.\n";
            return 0;
        }

        reversed = reversed * 10 + digit;  // Add the digit to the reversed number
    }

    return reversed;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int reversedNumber = reverseInteger(number);
    cout << "Reversed number: " << reversedNumber << "\n";

    return 0;
}
