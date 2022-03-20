#include <iostream>
#include <cmath>

bool is_palindrome_number(int n) {
    if (n < 0) return false;
    if (n == 0) return true;
    int number_of_digits = (int) log10(n) + 1;
    int loopCount = number_of_digits / 2;

    for (int i = 1; i <= loopCount; i++) {
        int x = (int) pow(10, number_of_digits - i);
        int y = (int) (pow(10, number_of_digits - 1) /
                pow(10, number_of_digits - i));
        int a = n / x;
        if (y > 1)
            a = a % 10;
        int b = n % (y * 10);
        if (y > 1)
            b = b / y;
        if (a != b)
            return false;
    }
    return true;
}

int main() {
    std::cout << is_palindrome_number(12321) << std::endl;
    return 0;
}
