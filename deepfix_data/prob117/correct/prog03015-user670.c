#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,char a,char b,char c)
{ int count1,count2,count3,sum=0;
    if(n<=1) {
    return n; }
   else if(n>1) {
      count1=hanoi(n-1,a,c,b);
      count2=hanoi(1,a,b,c);
      count3=hanoi(n-1,b,a,c);
      sum=sum+count1+count2+count3; }
    return sum; }
int main() {
int i;
for(i=0;i<5;i++) {
    printf("%d\n",hanoi(i,'r','a','h')); }
return 0; }