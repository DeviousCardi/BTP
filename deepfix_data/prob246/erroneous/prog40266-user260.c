#include <stdio.h>
int main() {
    int a,b,c;
    int sum,prd;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    prd=a*b*c;
    avg=(a+b+c)/3;
    printf("%d%d%.3f"sum,prd,avg);
	return 0; }