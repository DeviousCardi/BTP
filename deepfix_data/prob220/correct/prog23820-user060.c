#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,k;
    scanf("%d",&n);
    for (i=1;i<n;i++){
        for (j=2*n -1;j>0;j=j-1){
            printf(" ");
            printf("*"); }
        printf("\n"); }
	return 0; }