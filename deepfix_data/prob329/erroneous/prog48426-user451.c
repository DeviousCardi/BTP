#include <stdio.h>
#include <stdlib.h>
int main() {
    int (a,b,c )!= 0;
    scanf("%d %d %d",&a,&b,&c);
    if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    printf("Right Triangle");
    if(a*a+b*b>c*c||b*b+c*c>a*a||a*a+c*c>b*b)
    printf("Not Right Triangle");
    else
    printf("Cannot form a Triangle");
	return 0; }