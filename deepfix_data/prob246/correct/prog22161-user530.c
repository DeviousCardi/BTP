#include <stdio.h>
int main() {
    int a,b,c,sum,pro;
    float avg;
    scanf("%d%d%d",&a,&b,&c,"\n");
    sum=a+b+c;
    pro=a*b*c;
    avg=(a+b+c)/3;
    printf("%d",sum,"\n");
    printf("%d",pro,"\n");
    printf("%.3f",avg,"\n");
		return 0; }