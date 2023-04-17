#include <stdio.h>
#include <stdarg.h>

int sum(int numArgs, ...) {
    int sum = 0;

    // Initialize the va_list
    va_list args;
    va_start(args, numArgs);

    // Iterate through the variable arguments and add them to the sum
    for (int i = 0; i < numArgs; i++) {
        sum += va_arg(args, int);
    }

    // Clean up
    va_end(args);

    return sum;
}

int main() {
    printf("Sum of 1, 2, 3: %d\n", sum(3, 1, 2, 3));
    printf("Sum of 4, 5, 6, 7, 8: %d\n", sum(5, 4, 5, 6, 7, 8));
    return 0;
}