#include<stdio.h>
int sum(int n);
int main() {
   int n,i;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   printf("%d",sum(n));
    return 0; }
 int sum(int n) {
   if(n!=0)
    return n+sum(n-1); }