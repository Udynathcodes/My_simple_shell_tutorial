#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(void)
{
	pid_t m_ppid;
	m_ppid = getppid();
	printf("%u\n", m_ppid);

	return (0);
}
