#include <stdio.h>
int main(){
   int n,i,s=0,a;
   scanf("%d", &n);
   while(n!=0) {
       a=n%10;
       s=s+a;
       n=n/10; }
   i=n;
   printf("%d", i);
   while(i>=n) {
       printf("%d", i);
        if(i%s==0) {
          printf("%d", i);
          break; }
        i++; }
    return 0; }