#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k;
scanf("%d",&n);
int c=n/2;
for(j=1;j<=c+1;j++) {
for(i=c;i>=1;i--)
printf(" ");
if(j==1)
printf("*");
else {
    printf("*");
    for(k=1;k<=j-2;k++)
    printf(" ");
    printf("*"); }
printf("\n"); }
for(i=c;i>=1;i--) {
    for(j=1;j<=i;j++)
    printf(" ");
if(i==1)
printf("*");
else {
    for(k=i-2;k>=1;k--)
    printf(" ");
printf("*"); }
printf("\n"); }
	return 0; }