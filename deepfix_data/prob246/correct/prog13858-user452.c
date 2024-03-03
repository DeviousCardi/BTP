#include<stdio.h>
int main (){
int a,b,c;
int s,p;
float f;
scanf("%d %d %d",&a,&b,&c);
s=a+b+c;
p=a*b*c;
f=(a+b+c)/3;
printf("%d\n%d\n%0.3f",s,p,f);
return 0; }