#include <stdio.h>

int main() {
    int a = 10, b = 20, c, d;

    {
        int d;
        printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d); // generates random garbage values for c and d as not initialized
    }
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d); // generates random garbage values for c and d as not initialized
    
    // OBSERVATIONS:
    // The d initialized inside the block is out of the scope of the above printf statement, just the d defined in this block is in the scope
    // If I don't initialize d in this main function then the code doesn't compile itself
}