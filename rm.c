/**
 * rm command
 */
#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    if (argc == 1) {
	fprintf(stderr, "%s: missing operand\n", argv[0]);
	return 1;
    }

    int i;
    int ret = 0;

    for (i = 1; i <= argc - 1; i++) {
	if (unlink(argv[i]) != 0) {
	    perror(argv[i]);
	    ret = 1;
	}
    }

    return ret;
}
