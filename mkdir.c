/**
 * mkdir command
 */
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
	fprintf(stderr, "%s: missing operand\n", argv[0]);
	return 1;
    }

    int i;

    int result = 0;
    for (i = 1; i <= argc - 1; i++) {
	if (mkdir(argv[i], 0777) != 0) {
	    perror(argv[i]);
	    result = 1;
	}
    }

    return result;
}
