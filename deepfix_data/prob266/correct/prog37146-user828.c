#include <stdio.h>
int main(){
   int n,i=n,s=0,a;
   scanf("%d", &n);
   while(n!=0) {
       a=n%10;
       s=s+a;
       n=n/10; }
   printf("%d", i);
   while(i%s!=0) {
        if(i%s==0) {
          printf("%d", i);
          break; }
        i++; }
    return 0; }