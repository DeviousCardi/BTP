#include<stdio.h>
int i;
int product(int a[ i]) {
   if(i==0) {
       return a[0]; }
   return a[i]*product(a[i--]); }
int main() {
   int N,arr[100000000],t,j;
   scanf("%d",&N);
   for(j=0;j<N;j++) {
       scanf("%d ",&arr[j]); }
   t=product(arr[N-1]);
   printf("%d",t);
    return 0; }