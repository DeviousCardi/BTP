#include <stdio.h>
int main(){
 int n,m,i,a=3,b,count=0;
 scanf("%d%d",&m,&n);
 while(a<n) {
     for(i=2;i<a;i++) {
         if((a%i)==0) {
             break; }
         else {
             b=a; } }
     if((n%b)==0) {
         count++; }
     a++; }
 printf("%d",count);
    return 0; }