#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(((a*a)+(c*c))==(b*b))
printf("Right Triangle");
if(((a*a)+(c*c))!=(b*b))
printf("Not Right Triangle");
if(((a*a)+(c*c))<(b*b))
printf("Cannot form a Triangle");
	return 0; }