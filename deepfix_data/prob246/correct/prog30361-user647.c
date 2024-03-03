#include <stdio.h>
int main() {
    int a,b,c,sum,prod;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    prod=a*b*c;
    avg=(sum)/3.0;
    printf("%d",sum);
    printf("%d",prod);
    printf("%.3f",avg);
 return 0; }