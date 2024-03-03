#include <stdio.h>
int main() {
    int a,b,c;
    int x;
    scanf("%d%d%d",&a,&b,&c);
    x=a+b+c;
    printf("%d ",x);
    float y=x;
    printf("%f ",y);
    float A;
    A=x/3.0;
    printf("%.3f",A);
	return 0; }