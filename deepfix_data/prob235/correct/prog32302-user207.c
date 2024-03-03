#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
n>=3;
for (i=(2*n)-1;i<=n;i++){
for (j=i;;j++){
    printf("%d",j); }
    printf("\n"); }
	return 0; }