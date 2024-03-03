#include <stdio.h>
int main() {
    int a,b,c,s,p;
    float avg;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    s=a+b+c;
    p=a * b * c;
    avg=(a+b+c)/3;
    printf("%d",s);
    printf("\n%d",p);
    printf("\n%.3f",avg);
	return 0; }