#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	   if((a+b>c)&&(b+c>a)&&(c+a>b)){
	   if((a*a)+(b*b)<(c*c))&&((a*a)+(c*c)<(b*b))&&((b*b)+(c*C)<(a*a))             {printf("obtuse triangle");} }
       else{
       printf("not obtuse triangle");}
else{
    printf("cannot form a triangle");}
	return 0; }