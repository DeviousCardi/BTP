#include <stdio.h>
int main() {
    int a,b,c,d,e;
    float f;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=a+b+c;
    e=a*b*c;
    f=(a+b+c)/3.0;
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%.3f",f);
	return 0; }