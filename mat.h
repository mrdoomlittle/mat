# ifndef __mat__h
# define __mat__h
# include <mdlint.h>
# ifndef NULL
# define NULL ((void*)0)
# endif

typedef struct mat {
	char const *p, *end;
} *matp;

void matload(matp, char const*);
void matact(matp);
# endif /*__mat__h*/
