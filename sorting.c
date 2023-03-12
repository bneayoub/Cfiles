#include <stdio.h>

int main()
{
    int a, b, c, swap;
    printf("Enter 3 numbers you want to sort in ascending order: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        swap = a;
        a = b;
        b = swap;
    }
    if (b > c)
    {
        swap = b;
        b = c;
        c = swap;
    }
    if (a > b)
    {
        swap = a;
        a = b;
        b = swap;
    }

    printf("The sorted numbers in ascending order are: %d %d %d", a, b, c);
    return 0;
}