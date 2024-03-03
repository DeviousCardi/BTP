#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    int d=year/1000;
    int a=year%1000;
    a=(year-a)/1000;
    int b=a%100;
    b=(a-b)/100;
    int c=b%10;
    int sum=a+b+c+d;
    printf("%d",sum);
    return 0; }