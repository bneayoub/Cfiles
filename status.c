#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main(void)
{
    pid_t child_pid;
    int status=666;

	

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("Wait for me, wait for me\n");
       exit(14);
    }
    else
    {
		printf("%d\n", status);
        wait(&status);
		printf("%d\n", status);
        printf("Oh, it's all better now\n");
    }
    return (0);
}