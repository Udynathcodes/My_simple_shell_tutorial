#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int id = fork();
	printf("current id: %d\n, parent id: %d\n",
			getpid(), getppid());

	return (0);
}
