#include <stdio.h>
int main(){
int n,a,b,c,d,e,f,y;
scanf("%d",&n);
y=2016;
a=n/1000;
b=n%1000;
c=b/100;
d=b%100;
e=d/10;
f=d%10;
while((y%(a+c+e+f))!=0) {
     y=y+1;
     if((y%(a+c+e+f))!=0)
     break; }
 printf("%d",y);
 return 0; }