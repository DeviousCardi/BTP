#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k;
scanf("%d",&n);
for(i=1;i<=n;i++) {
    if(i==1||i==n) {
        for(j=1;j<=(n-1)/2;j++) {
            printf(" "); }
        printf("*\n"); }
           else {
           if(i<=(n+1)/2) {
         for(j=(n-1)/2 - i;j>=0;j--) {
             printf(" "); }
         printf("*");
         for(k=0;k<i-2;k++) {
             printf(" "); }
         printf("*\n"); }
         else {
             for(j=1;j<=i-(n-1)/2;j++) {
             printf(" "); }
         printf("*");
         for(k=n-1-i;k>0;k--) {
             printf(" "); }
         printf("*\n"); } } } }
return 0; }