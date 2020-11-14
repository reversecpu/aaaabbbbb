#include <stdio.h>

int main(){
	char* buf[200];
	for(int i = 0; i < 5; i++){
	  scanf("%s", buf);
	  system(buf);
	}
	return 0;
}
