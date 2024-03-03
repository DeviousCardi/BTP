#include <stdio.h>
#include <stdlib.h>
int main() {
	int amnt,tax;
	scanf("%d%d",&amnt,&tax);
	if (amnt<=200000){printf("tax==0");}
	else if (amnt<=500000){printf("tax==0.1*(amnt-200000)");}
	else if (amnt<=1000000){printf("tax==30000+0.2*(amnt-500000)");}
	else if (amnt>1000000){printf("tax==130000+0.3*(amnt-1000000)");}
	return 0; }