# include "mat.h"
# include <string.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# include <malloc.h>
int main(int __argc, char const *__argv[]) {
	if(__argc<2) {
		fprintf(stderr, "please provide file.\n");
		return -1;
	}

	struct mat mt;
	int fd;

	fd = open(__argv[1], O_RDONLY, 0);
	struct stat st;
	fstat(fd, &st);
	void *p = malloc(st.st_size);
	read(fd, p, st.st_size);

	printf("filesize: %u\n", st.st_size);
	mt.p = (char const*)p;//"<colour: r:222><pos: padl:2, padt:2>Hello World!</>mrdoomlittle</>";
	mt.end = mt.p+st.st_size;
	matact(&mt);
	free(p);
	return 0;
}
