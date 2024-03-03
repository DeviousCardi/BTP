#include <stdio.h>
int main(){
int a1,a2,n;
scanf("%d %d %d",&a1,&a2,&n);
if(n==1)printf("%d",a1);
if(n==2)printf("%d",a2);
if(n>2) {
     for(int i=3;i<=n;i++) {
         int c=a1+a2-2;
       a2=a1;
       a1=c; }
       printf("%d",c); }
    return 0; }