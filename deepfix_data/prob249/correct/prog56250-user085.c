#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k;
scanf("%d",&n);
for(i=1;i<=n;i++) {
    if(i==1||i==n) {
        for(j=1;j<=(n-1)/2;j--) {
            printf(" "); }
        printf("*"); }
     else {
           if(i<=(n+1)/2) {
         for(j=(n-1)/2 - i;j>=0;j--) {
             printf(" "); }
         printf("*");
         for(k=1;k<=i-2;k++) {
             printf(" "); }
         printf("*\n"); } } }
return 0; }