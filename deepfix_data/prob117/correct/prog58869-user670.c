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
int t,i,j;
long int k;
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&j);
    for(k=0;k<500000;i++) {
        if(j==hanoi(k,'r','a','h')) {
            printf("yes\n"); }
        else {
            printf("no\n"); } } }
return 0; }