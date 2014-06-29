#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

void do_ls(char *path);

int main(int argc, char *argv[])
{
    char *path;
    if (argc <= 1) {
	path = ".";
    } else {
	path = argv[1];
    }

    do_ls(path);

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
