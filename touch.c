/**
 * touch command
 */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
	fprintf(stderr, "%s: missing operand\n", argv[0]);
	return 1;
    }

    int i;
    int ret = 0;
    int fd;
    for (i = 1; i <= argc - 1; i++) {
	if ((fd = open(argv[i], O_CREAT, 0644)) == -1) {
	    perror(argv[i]);
	    ret = 1;
	}

	close(fd);
    }

    return ret;
}
