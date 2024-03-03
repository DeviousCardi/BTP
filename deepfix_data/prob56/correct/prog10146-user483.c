#include<stdio.h>
#include<stdlib.h>
int cat(int n) {
    if(n==0) {
        return 1; }
    else
        return (2*(2*n-1)*cat(n-1))/(n+1) ; }
int main() {
   int i,j,n,k=0;
scanf("%d\n",&n);
int a[100000];
for(i=0;i<n;i++) {
scanf("%d\n",&a[i]); }
     for(j=0;j<n;j++) {
         while(k<n) {
               if(a[k]<cat(j)) {
        printf("%d\n",cat(j));
        k++; } } }
    return 0; }