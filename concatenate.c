#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage: ./program string1 string2\n");
        exit(EXIT_FAILURE);
    }
    size_t size = strlen(argv[1]) + strlen(argv[2]);
    char buf[size];
    memccpy(memccpy(buf, argv[1], '\0', size) - 1, argv[2], '\0', size);
    printf("%s\n", buf);
    exit(EXIT_SUCCESS);
}