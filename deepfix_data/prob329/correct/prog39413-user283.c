#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
    if(((a*a)==((b*b)+(c*c)))||((b*b)==((a*a)+(c*c)))||((c*c)==((b*b)+(a*a))))
     printf("Right Triangle");
	 else if((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
	printf("Not Right Triangle");
	 else if (((a*a)<((b*b)+(c*c)))||((b*b)<((a*a)+(c*c)))||((c*c)<((b*b)+(a*a))))
	printf("Not Right Triangle");
	 else if (((a*a)>((b*b)+(c*c)))||((b*b)>((a*a)+(c*c)))||((c*c)>((b*b)+(a*a))))
	printf("Not Right Triangle");
	else if ((a>(b+c))&&(b>(a+c))&&(c>(a+b)))
	printf("Cannot form a Triangle");
	return 0; }