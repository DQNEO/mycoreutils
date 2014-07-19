#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *path;
    char buf[2048];

    path = argv[1];
    FILE *fin;
    fin = fopen(path,"r");
    if (fin == NULL ) exit(1);
    while (fgets(buf, 2048, fin) !=NULL) {
        printf("%s",buf);
    }
    fclose(fin);
    return 0;
}
