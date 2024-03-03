#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    int prod=a*b*c;
    float avg=(a+b+c)/3.0;
    printf("%d",sum);
    printf("%d",prod);
    printf("%.3f",avg);
    return 0; }