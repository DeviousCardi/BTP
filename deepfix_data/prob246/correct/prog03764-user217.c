#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    int y=a+b+c;
    int x=a*b*c;
    float z=(a+b+c)/3;
    printf("%d\n",y);
    printf("%d\n",x);
    printf("%.3f",z);
return 0; }