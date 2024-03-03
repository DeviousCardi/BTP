#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    int S=a+b+c, P=a*b*c ;
    float A=(a+b+c)/3.0;
    printf("%d\n%d\n%.3f",S,P,A);
	return 0; }