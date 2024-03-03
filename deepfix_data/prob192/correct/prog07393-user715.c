#include<stdio.h>
int main() {
int i,j,k,n;
printf("\nEnter the No. :");
scanf("%d",&n);
for(i=1;i<=n-1;i++) {
for(j=n-1;j>=i;j--) {
if(i==j)
printf(" *");
else
printf(" "); }
for(j=1;j<=n;j++) {
if(i==j && i!=1 && i!=(n-(n-1)))
printf("*");
else if(j==2 || i==2)
printf(" ");
else
printf(" "); }
printf("\n"); }
for(i=1;i<=n+1;i++) {
for(j=1;j<=n;j++) {
if(i==j)
printf("*");
else
printf(" "); }
for(j=n-1;j>=i;j--) {
if(i==j)
printf("*");
else
printf(" "); }
printf("\n"); }
return 0; }