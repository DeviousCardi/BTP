#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   while(n!=0) {
       a=n%10;
       s=s+a;
       n=n/10; }
   for(i=n; i++) {
        if(i%s==0) {
          printf("%d", i);
          break; } }
    return 0; }