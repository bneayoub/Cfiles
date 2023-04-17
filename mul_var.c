#include <stdio.h>
#include <stdarg.h>

int multiply_numbers(int count, ...)
{
	va_list args;
	va_start(args, count);
	int i=0;
	int mul=1;
	while (i<count)
	{
		mul *=va_arg(args,int);
		i++;
	}
	va_end(args);
	return (mul);
}

int main() {
    int product = multiply_numbers(4, 1, 2, 3, 4);
	printf("%d\n",product);
    return 0;
}