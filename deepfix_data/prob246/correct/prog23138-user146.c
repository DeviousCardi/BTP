#include <stdio.h>
int main() {
    int a,b,c,s,p;
    float A,g;
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    p=a*b*c;
    g=a+b+c;
    A=g/3;
    printf("%d\n%d\n%.3f\n",s,p,A);
	return 0; }