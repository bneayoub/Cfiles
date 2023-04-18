#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        const char *str = va_arg(args, const char *);
        if (str == NULL)
        {
            printf("(nil)");
        }
        else
        {
            printf("%s", str);
        }
        
        if (i < n - 1 && separator != NULL)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end(args);
}

int main(void)
{
 print_strings(", ", 2, "Jay", "Django");
 return (0);
}