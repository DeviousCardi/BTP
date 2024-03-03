#include <stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 a=n%10,e=n/10;
 b=e%10,f=n/100;
 c=f%10,g=n/1000;
 d=a+b+c+g;
 for(i=2016;1;i++){
     if(i%d==0){
         printf("%d",i);break; } }
    return 0; }