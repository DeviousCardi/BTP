#include <stdio.h>
int main() {
int i,n,j;
scanf("%d",&n);
for(i=1;i<=n;i=i+1) {
    for(j=i;j<=2*i-1;j=j+1) {
        printf("*"); }
    printf("\n"); }
for(i=n;i>=1;i=i+1); {
    for(j=i;j<=2*i-1;j=j+1) {
        printf("*"); }
    printf("\n"); }
	return 0; }