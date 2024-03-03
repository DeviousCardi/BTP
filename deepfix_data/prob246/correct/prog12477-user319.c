#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s;
    s= a+b+c;
    int p;
    p=a*b*c;
    float A;
    A=s/3.0;
    printf("%d\n%d\n%.3f",s,p,A);
	return 0; }