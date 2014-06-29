#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

void do_ls(char *path);

int main(int argc, char *argv[])
{

    if (argc <= 1) {
	// in case of no arguments
	do_ls(".");
    } else if (argc == 2) {
	// in case of one argument
	do_ls(argv[1]);
    } else {
	// more than 2 arguments
	int i;
	for (i = 1; i <= argc - 1; i++) {
	    do_ls(argv[i]);
	}
    }

    return 0;
}

void do_ls(char *path)
{
    DIR *dp;
    dp = opendir(path);
    if (dp == NULL) {
	perror(path);
	exit(1);
    }
    struct dirent *dent;
    while ((dent = readdir(dp)) != NULL) {
	printf("%s  ", dent->d_name);
    }

    printf("\n");

    return;
}
