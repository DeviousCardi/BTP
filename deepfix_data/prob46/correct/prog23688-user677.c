#include <stdio.h>
int main(){
 int n,m,i,a,b,count=0;
 scanf("%d%d",&m,&n);
 for(a=3;a<n;a++) {
     for(i=2;i<a;i++) {
         if((a%i)==0) {
             b=n-1;
             break; }
         else {
             b=a; } }
     if((n%b)==0) {
         count++; } }
  if(n%2==0) {
     count++; }
 printf("%d",count);
    return 0; }