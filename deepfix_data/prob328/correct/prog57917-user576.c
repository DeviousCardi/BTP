#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
 if(n<=1)
 return n;
 else
 return fib(n-1)+fib(n-2); }
int main() {
int t,i,num,count;
scanf("%d",&t);
for(i=0;i<t;i++) {
  count=0;
  scanf("%d",&num);
  while(fib(count)<num) {
   count+=1; }
   if(fib(count)==num)
    printf("yes\n");
   else
    printf("no\n"); }
return 0; }