#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
    if((a*a+b*b>c*c)&&(a*a+b*b>c*c)&&(b*b+c*c>a*a)&&(c*c+a*a>b*b)){
    printf("acute triangle");}
    else
    if((a+b<=c)&&(b+c<=a)&&(c+a<=b)){
        printf("not acute triangle"); }
    if ((a+b<=c)&&(b+c<=a)&&(a+c<=b)){
    printf("can not form a triangle");}
	return 0; }