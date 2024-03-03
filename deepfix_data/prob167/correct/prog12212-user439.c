#include<stdio.h>
long int count,sum1 =0;
long int sum(long int);
int main() {
    int n=0;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0; }
long int sum(long int n) {
   if(n==0)
    return 0;
   count=count+1;
   if (count==n+1) {
       return sum1; }
   long int x=0;
   scanf("%d",&x);
   sum1 =sum1 +x;
   sum(n); }