#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,n,k,l;
scanf("%d",&n);
for(i=1;i<=n/2+1;i++) {
    for(j=1;j<=n+1/2-i;j++) {
        printf(" "); }
 for(j=1;j<=2*i-1;j++) {
        printf("*"); }
     printf("\n"); }
for (j=i;j<=n;j++) {
    for(l=1;l<=2*(n-j)+1;l++) {
        printf("*"); }
    printf("\n"); }
return 0; }