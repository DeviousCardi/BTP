#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
for (i=(n+1)/2;i<=n;i++){
for (j=i;j<=i+2;j++){
    printf("%d",j); }
    printf("\n"); }
	return 0; }