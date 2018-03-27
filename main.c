# include "mat.h"
# include <string.h>
int main() {
	struct mat mt;
	mt.p = "<pos: padl:2, padt:2>Hello World!</>";
	mt.end = mt.p+strlen(mt.p);
	matact(&mt);
}
