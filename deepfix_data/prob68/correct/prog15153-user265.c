#include<stdio.h>
int product(int a[1000000000],int i) {
   if(i==0) {
       return a[0]; }
   else {
   return product( a,i-1); } }
int main() {
   int N,arr[100000000],t,j;
   scanf("%d\n",&N);
   for(j=0;j<N;j++) {
       scanf("%d ",&arr[j]); }
   t=product(arr,N-1);
   printf("%d",t);
    return 0; }