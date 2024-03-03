#include <stdio.h>
int main() {
    int a,b,c;
    int d;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    printf("%d\n",d);
    d=a*b*c;
    printf("%d\n",d);
    avg=(a+b+c)/3;
    printf("%.3f",avg);
	return 0; }