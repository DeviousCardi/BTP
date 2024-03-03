#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
for (i=(n+1)/2;i==1;i++){
for (j=i-1;j<=i+1;j++){
    printf("%d",j); }
    printf("\n"); }
	return 0; }