#include <stdio.h>
int main(){
 int n,i,a,b,c,d,p,count;
 scanf("%d",&n);
 n=1000*a+100*b+10*c+d;
 p=a+b+c+d;
 count=2016;
 for(i=0;i>=0;i=i+1){
     count=count+1;
     if((count%p)==0){
         printf("%d",count); } }
    return 0; }