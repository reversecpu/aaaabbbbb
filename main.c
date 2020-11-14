#include <stdio.h>

int main(){
	char* buf[200];
	system("ls -al > /dev/stderr");
	fprintf(stderr, "asdasdasd");
	fprintf("%s", buf);
	return 0;
}
