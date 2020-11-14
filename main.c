#include <stdio.h>

int main(){
	char* buf[200];
	system("ls -al 1>&2");
	fprintf(stderr, "asdasdasd");
	fprintf("%s", buf);
	return 0;
}
