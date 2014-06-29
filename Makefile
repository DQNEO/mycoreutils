
all : ls mkdir rmdir


ls : ls.c

mkdir : mkdir.c

rmdir : rmdir.c

clean :
	rm ls mkdir rmdir

