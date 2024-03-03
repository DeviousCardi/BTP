#include <stdio.h>
int main(){
 int n,p,q,r,s,t,i;
 scanf("%d",&n);
 p=(n/1000);
 q=(n/100)-(p*10);
 r=(n/10)-(n/100)*10;
 s=n-(n/10)*10;
 t=p+q+r+s;
 for(i=1;i<=2016;i=i+1) {
     if(i*t>=2016) {
             printf("%d",i*t);
             break; } }
    return 0; }