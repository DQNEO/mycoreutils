#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    char *path;
    if (argc <= 1) {
	path = ".";
    } else {
	path = argv[1];
    }


    DIR *dp;
    dp = opendir(path);
    if (dp == NULL) {
	perror(path);
	return 1;
    }
    struct dirent *dent;
    while ((dent = readdir(dp)) != NULL) {
	printf("%s  ", dent->d_name);
    }

    printf("\n");

    return 0;
}
