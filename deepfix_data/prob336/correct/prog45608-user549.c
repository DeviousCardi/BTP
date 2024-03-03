#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(b*b+c*c>a*a)&&(a+b>c)&&(a+c>b)&&(c+b>a))      printf("Acute Triangle");
    else if((a+b<=c)||(a+c<=b)||(c+b<=a))                                                printf("Cannot form a Triangle");
    else                                                                            printf("Not acute Triangle");
	return 0; }