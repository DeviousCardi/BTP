#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            printf(" "); }
        for(k=1;k<=n/i+n-i;k++){
            printf("*"); }
        for(j=1;j<=i-1;j++){
            printf(" "); }
        printf("\n"); }
	return 0; }