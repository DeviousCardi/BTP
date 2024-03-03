#include<stdio.h>
int count,sum1 =0;
int sum(int);
int main() {
    int n=0;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0; }
int sum(int n) {
   count=count+1;
   if (count==n) {
       return sum1; }
   int x=0;
   scanf("%d",&x);
   sum1 =sum1 +x;
   sum(n); }