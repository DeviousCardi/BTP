#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k,h,start;
    h=(n+1)/2;
    for(i=0;i<h;i++){
    start=h-i;
    for(j=1; j<=h-i; j++)
        printf(" ");
    for(k=0; k<2*(i+1)-1; k++)
        printf("%d", start-k);
    printf("\n"); }
	return 0; }