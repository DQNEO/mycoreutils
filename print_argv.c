#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    if (argc <= 1) {
	fprintf(stderr, "no arguments\n");
	return 1;
    }

    for (i = 1; i <= argc - 1; i++) {
	printf("%s ", argv[i]);
    }

    printf("\n");
    return 0;
}
