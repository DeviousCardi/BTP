#include<stdio.h>
int main(){
    int a,b,c,sum,product;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    product=a*b*c;
    avg=(a+b+c)/3.0;
    printf("%d\n",sum);
    printf("%d\n",product);
    printf("%.3f",avg);
    return 0; }