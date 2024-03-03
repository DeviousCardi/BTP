#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d;
    d=a+b+c;
    int e;
    e=a*b*c;
    float f;
    f=(a+b+c)/3;
    printf("%d\n%d\n%.3f",d,e,f);
    return 0; }