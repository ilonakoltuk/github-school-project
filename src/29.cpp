#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n % 2 == 0) {
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    } else {
        for (int i = 0; i < n; i += 2)
            cout << i + 1 << " ";
    }

    return 0;
}
