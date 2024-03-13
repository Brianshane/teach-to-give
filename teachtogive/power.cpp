#include <iostream>
using namespace std;
bool isPowerOfTwo(int base) {
    if (base <= 0) {
        return false;
    }
    return (base & (base - 1)) == 0;
}

int main() {
    int input;
    cout << "Enter an integer: ";
    cin >> input;

    if (isPowerOfTwo(input)) {
    cout << input << " is a power of two." <<endl;
    } else {
   cout << input << " is not a power of two." <<endl;
    }

    return 0;
}
