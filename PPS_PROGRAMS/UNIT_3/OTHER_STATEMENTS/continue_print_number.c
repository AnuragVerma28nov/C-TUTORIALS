// print number continue statement

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}

