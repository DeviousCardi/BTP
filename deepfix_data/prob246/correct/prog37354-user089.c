#include <stdio.h>
int main() {
    int s,p;
    float a,b,c,avg;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    s=a+b+c;
    p=a * b * c;
    avg=(a+b+c)/3;
    printf("%d",s);
    printf("\n%d",p);
    printf("\n%.3f",avg);
	return 0; }