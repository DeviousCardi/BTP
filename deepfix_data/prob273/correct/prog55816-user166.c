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
    for(k=1; k<=i+1; k++){
        printf("%d", start);
        start++; }
    printf("\n"); }
	return 0; }