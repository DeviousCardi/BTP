#include <stdio.h>
int main(){
 int n,i,a,b,c,d,p,count;
 scanf("%d",&n);
 a=n/1000;
 b=(n/100)%10;
 c=(n/10)%10;
 d=n%10;
 n=1000*a+100*b+10*c+d;
 p=a+b+c+d;
 count=2015;
 for(i=0;;i=i+1){
     count=count+1;
     if((count%p)==0){
         printf("%d",count);
         break; } }
    return 0; }