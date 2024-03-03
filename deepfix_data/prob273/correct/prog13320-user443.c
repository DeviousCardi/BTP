#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,b,a;
	scanf("%d",&b);
	n=(b+1)/2;
	for(i=n;i>=1;i=i-1){
	    for(j=i;j<=n;j=j+1){
	        for(a=1;a<=(j-1);a++){
	            printf(" ");}
	        printf("%d",j); }
	    printf("\n");}
    for(i=2;i<=n;i=i+1){
        for(j=i;j<=n;j=j+1){
            printf("%d",j); }
        printf("\n"); }
    return 0;}