#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int x=a+b+c;
    int e=a*b*c;
    float g=(a+b+c)/3;
    printf("%d\n",x);
    printf("%d\n",e);
    printf("%.3f",g);
	return 0; }