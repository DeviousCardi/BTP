#include<stdio.h>
#include<stdlib.h>
int cat(int n) {
    if(n==0) {
        return 1; }
    else
        return (2*(2*n-1)*cat(n-1))/(n+1) ; }
int main() {
   int i,j,n,k;
scanf("%d\n",&n);
int a[1000];
for(i=0;i<n;i++) {
scanf("%d\n",&a[i]); }
     for(j=0;j<n;j++) {
         for(k=0;k<n;k++) {
               if(a[k]<cat(j)) {
        printf("%d\n",cat(n)); }
               break; } }
    return 0; }