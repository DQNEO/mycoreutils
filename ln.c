/**
 * ln command
 */
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc <= 2) {
	fprintf(stderr, "%s: missing operand\n", argv[0]);
	return 1;
    }

    if (link(argv[1], argv[2]) == -1) {
	perror("unable to link");
	return 1;
    }

    return 0;
}
