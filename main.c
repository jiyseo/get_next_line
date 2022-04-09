#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int fd;
	int fd2;

	fd = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	printf("buf=%s", get_next_line(1000));
//	printf("buf=%s", get_next_line(fd2));
//	printf("buf=%s", get_next_line(fd));
//	printf("buf=%s", get_next_line(fd2));

    return 0;
}
