#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > 0 && num2 > 0) {
        cout << "Both numbers are positive." << endl;
    } else if (num1 < 0 && num2 > 0) {
        cout << "First number is negative, second number is positive." << endl;
    } else if (num1 < 0 && num2 < 0) {
        cout << "Both numbers are negative." << endl;
    } else if (num1 == 0) {
        cout << "One of the numbers is zero." << endl;
    }
    return 0;
}
