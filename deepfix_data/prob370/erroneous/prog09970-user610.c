#include<stdio.h>
int main() {
int a,b,c;
int d,e,f;
scanf("%d%d%d",&a,&b,&c);
d=a*a;
e=b*b;
f=c*c;
if(((a+b)<=c)||((b+c)<=a)||((a+c)<=b)) {
    printf("INVALID"); }
else {
    if(((d+e)==f)||((d+f)==e)||((f+e)==d))
    {printf("RIGHT"); }
return 0; }