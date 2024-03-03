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
int t,i,j,k;
int a[1000];
for(i=0;i<25;i++) {
    a[i]=hanoi(i,'r','a','h'); }
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&j);
    for(k=0;k<25;k++) {
        if(j==a[k]) {
            printf("yes"); }
        else {
            printf("no"); } }
return 0; }