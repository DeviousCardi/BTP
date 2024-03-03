#include <stdio.h>
#include <stdlib.h>
int main() {
	float amnt,tax;
	scanf("%f%f",&amnt,&tax);
	if (amnt<=200000){printf("%f",0.00);}
	else if (amnt<=500000){printf("%f",0.1*(amnt-200000));}
	else if (amnt<=1000000){printf("%f",30000+0.2*(amnt-500000));}
	else if (amnt>1000000){printf("%f",130000+0.3*(amnt-1000000));}
	return 0; }