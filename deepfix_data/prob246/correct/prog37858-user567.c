#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int d,e;
    float f;
    d=a+b+c;
    e=a*b*c;
    f=((a+b+c)/3.0);
    printf("%d %d %.3f",d,e,f);
	return 0; }