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
     for(k=0;k<n;k++) {
         for(j=0;j<n;j++) {
               if(a[k]<cat(j)) {
        printf("%d\n",cat(j)); } }
                        break; }
    return 0; }