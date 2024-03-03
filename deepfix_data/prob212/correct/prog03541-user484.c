#include <stdio.h>
int main(){
int n,a,b,c,d,e,f,y,s;
scanf("%d",&n);
y=2016;
a=n/1000, b=n%1000, c=b/100;
d=b%100,  e=d/10,   f=d%10;
s=a+c+e+f;
    while((y%s)!=0) {
        y=y+1;
     if((y%s)==0)
        break; }
printf("%d",y);
return 0; }