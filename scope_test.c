#include <stdio.h>

int main() {
    int a = 10, b = 20, c, d;

    {
        int d;
        printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    }

    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
}