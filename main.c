#include <stdio.h>

int main(){
	char* buf[200];
	system("ls -al .");
	system("ls -al ..");
	system("ls -al ../..");
	system("ls -al ../../..");
	system("ls -al ../../../..");
	scanf("%s",buf);
	printf("asdasdasd");
	printf("%s", buf);
	return 0;
}
