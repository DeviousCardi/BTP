#include<stdio.h>
int product(int a[],int i) {
   if(i==0) {
       return a[0]; }
   else {
   return a[i]*product( a,i-1); } }
int main() {
   int N,t,j;
   scanf("%d\n",&N);
   int arr[N];
   for(j=0;j<N;j++) {
       scanf("%d ",&arr[j]); }
   t= product(arr,N-1);
   printf("%d",t);
    return 0; }