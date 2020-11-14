#include <stdio.h>

int main(){
	char* buf[200];
	system("ls -al .");
	system("ls -al ..");
	system("ls -al ../..");
	system("ls -al ../../..");
	system("ls -al ../../../..");
	return 0;
}
