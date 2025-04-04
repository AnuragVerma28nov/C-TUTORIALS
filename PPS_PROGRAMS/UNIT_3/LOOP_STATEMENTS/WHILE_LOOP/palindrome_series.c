// palindrome_series

#include <stdio.h>

int main() {
    int num, reverse, original;
    for (int i = 100; i <= 500; i++) {
        num = i;
        reverse = 0;
        original = num;
        while (num != 0) {
            int digit = num % 10;
            reverse = reverse * 10 + digit;
            num /= 10;
        }
        if (original == reverse) {
            printf("%d is a palindrome number.\n", original);
        }
    }
    return 0;
}
