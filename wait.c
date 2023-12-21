#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	int id = fork();
	int n;
	
	if (id == -1)
	{
		perror("fork failed\n");
		return -1;
	}

	if ( id == 0)
	{
		n = 1;
	}
	else
	{
		n = 6;
	}
	if (id != 0)
	{
		wait(NULL);
	}
	for (int i = n; i <= n + 5; i++)
	{
		printf("%d", i);
		fflush(stdout);
	}
	printf("\n");

	return (0);
}
