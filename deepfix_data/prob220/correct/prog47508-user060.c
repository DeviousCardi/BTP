#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,k;
    scanf("%d",&n);
    for (i=1;i<n;i++){
        for (j=n-i;j>=1;j--){
            printf(" "); }
        printf("*");
        for (k=3;k<=2*i - 1;k++){
            printf(" "); }
        if(i!=1){
                printf("*");
        printf("\n"); } }
    for (i=1;i<=2*n - 1;i++){
        printf("*"); }
	return 0; }