#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int d=a*a;
    int e=b*b;
    int f=c*c;
    if((a+b>c)&&(b+c>a)&&(a+c>b)) {
    if((d==e+f)||(e==d+f)||(f==d+e))
    printf("Right Triangle");
    else
    printf("Not Right Triangle"); }
    else
    printf("Cannot form a Triangle");
	return 0; }