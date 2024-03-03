#include <stdio.h>
int main() {
    int x,s,p,y,z;
    float a;
    scanf("%d",x);
    scanf("%d",y);
    scanf("%d",z);
    s=x+y+z;
    p=x*y*z;
    a=s/3;
    printf("%d",s);
    printf("%d",p);
    printf("%.3f",a);
	return 0; }