#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    
    if (height > 0) {
        for (int i = 1; i <= height; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                cout << "*";
            }
            cout << endl;
        }
    } else {
        cout << "Invalid input. Height must be a positive integer." << endl;
    }

    return 0;
}
