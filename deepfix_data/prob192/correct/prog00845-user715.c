#include<stdio.h>
int main() {
int i,j,n;
scanf("%d",&n);
for(i=1;i<=n+(n-1);i++) {
for(j=1;j<=n+(n-1);j++) {
if(i+j==(n+1) || i+j==(n+n+n-1) || i-j==(n-
1) || i-j==-(n-1))
printf("*");
else
printf(" "); }
printf("\n"); } }