#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rev = 0;
    while (n != 0) {
        int ld = n % 10;      // last digit
        rev = rev * 10 + ld;  // add digit in reverse
        n = n / 10;           // remove last digit
    }

    cout << "Reverse = " << rev << endl;
    return 0;
}
