#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    int prod=a*b*c;
    float avg=(a+b+c)/3.0;
    printf("%d\n",sum);
    printf("%d\n",prod);
    printf("%.3f\n",avg);
    return 0; }