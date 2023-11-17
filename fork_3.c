#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int id = fork();

	if (id != 0)
	{
		fork();
	}
	printf("udynathcodes 3 times\n");

	return (0);
}
