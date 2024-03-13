#include <iostream>

int reverseInteger(int num) {
    int reversed = 0;
    bool isNegative = num < 0;
    if (isNegative) {
        num = -num;
    }

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return isNegative ? -reversed : reversed;
}

int main() {
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;

    int reversed = reverseInteger(input);
    std::cout << "Reversed integer: " << reversed << std::endl;

    return 0;
}
