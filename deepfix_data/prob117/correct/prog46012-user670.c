#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,char a,char b,char c)
{ int count1,count2,count3,sum=0;
    if(n==0) {
    return 0; }
   else if(n>0) {
      count1=hanoi(n-1,a,c,b);
      count2=hanoi(1,a,b,c);
      count3=hanoi(n-1,b,a,c);
      sum=sum+count1+count2+count3; }
    return sum; }
void comp(int n,int k) {
    int i;
    char a,b,c;
    for(i=0;i<=n;i++) {
        k=hanoi(n,a,b,c);
        if(i==k) {
            printf("yes\n"); }
        else {
            printf("no\n"); } } }
int main() {
 int t,i,n,j,k;
 char a,b,c;
 scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&j);
    j=hanoi(n,a,b,c);
    comp(n,j); }
	return 0; }