#include <stdio.h>
#include <stdlib.h>
int catalan(int n)
{ int i,sum=0;
    if((n==1)&&(n==0)) {
        return 1; }
 else {
       for(i=0;i<n;++i) {
           sum=sum+(catalan(i)*catalan(n-i-1)); } }
  return sum; }
int search(int arr[],int key) {
    int i,pos;
    for(i=0;i<25;++i) {
         if((arr[i]<key)&&(arr[i+1]>key)) {
               pos=i; } }
    return arr[i]; }
int main() {
    int t,z,i,j,A[26],k;
for(i=0;i<=25;++i) {
    A[i]=catalan(i); }
   scanf("%d",&t);
 for(j=0;j<t;++j) {
      scanf("%d",&k);
      z=search(A,k);
      printf("%d\n",z); }
   return 0; }