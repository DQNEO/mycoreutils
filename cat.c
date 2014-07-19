#include <stdio.h>
#include <stdlib.h>

void do_cat(const char *path)
{
    char buf[2048];
    FILE *fin;
    fin = fopen(path,"r");
    if (fin == NULL ) exit(1);
    while (fgets(buf, 2048, fin) !=NULL) {
        printf("%s", buf);
    }
    fclose(fin);
}


int main(int argc, char *argv[])
{
    int i;
    n = 1;
    for (i=1;i<argc;i++) {
        do_cat(argv[i]);
    }
    return 0;
}
