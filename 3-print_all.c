#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    int i = 0;
    const char *str;
    char current;

    while (format[i])
    {
        current = format[i];
        if (current == 'c')
        {
            printf("%c", (char)va_arg(args, int));
        }
        else if (current == 'i')
        {
            printf("%d", va_arg(args, int));
        }
        else if (current == 'f')
        {
            printf("%f", (float)va_arg(args, double));
        }
        else if (current == 's')
        {
            str = va_arg(args, const char *);
            if (str == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", str);
            }
        }

        if (format[i + 1] && (current == 'c' || current == 'i' || current == 'f' || current == 's'))
        {
            printf(", ");
        }
        i++;
    }

    printf("\n");
    va_end(args);
}

int main(void)
{
 print_all("ceis", 'B', 3, "stSchool");
 return (0);
}
//B, 3, stSchool
