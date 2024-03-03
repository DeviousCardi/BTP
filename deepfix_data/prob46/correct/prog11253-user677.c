#include <stdio.h>
int main(){
 int n,m,i,j,a=3,count=0;
 scanf("%d%d",&m,&n);
 while(a<n) {
     for(i=2;i<a;i++) {
         if((a%i)==0) {
             break; }
         else if((a%i)!=0) {
             if(n%a==0) {
                 count++; } } }
     a++; }
 printf("%d",count);
    return 0; }