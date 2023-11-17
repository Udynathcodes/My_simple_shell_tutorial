#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int id = fork();
	printf("udynathcodes from id : %d\n", id);
	if (id == 0)
	{
		printf("udynathcodes from the child process\n");
	}
	else
		printf("udynathcodes from the main process\n");

	return (0);
}
