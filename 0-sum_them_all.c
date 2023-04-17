#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int i, sum=0;
	for (i=0;i<n;i++){
		sum+=va_arg(args,int);
	}

	return sum;
}

int main(void)
{
 int sum;
 sum = sum_them_all(2, 98, 1024);
 printf("%d\n", sum);
 sum = sum_them_all(4, 98, 1024, 402, -1024);
 printf("%d\n", sum);
 return (0);
}