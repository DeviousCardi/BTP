#include <stdio.h>
int main() {
    int a; int b; int c;
    scanf("%d%d%d", &a, &b, &c);
    int x;
    x = a + b + c;
    printf("%d",x);
    int r;
    r = (a*b*c);
    printf("%d",r);
    float y;
    y = (a + b +c)/3;
    printf("%.3f",y);
	return 0; }