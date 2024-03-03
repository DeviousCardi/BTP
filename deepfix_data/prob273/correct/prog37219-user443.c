#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,b;
	scanf("%d",&b);
	n=(b+1)/2;
	for(i=n;i>=1;i=i-1){
	    for(j=i;j<=n;j=j+1){
	        printf("%d",j); }
	    printf("\n");}
    for(i=(n-1);i<=n;i=i+1){
        for(j=i;j<=n;j=j+1){
            printf("%d",j); }
        printf("\n"); }
    return 0;}