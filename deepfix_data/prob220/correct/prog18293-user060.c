#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,k;
    scanf("%d",&n);
    for (i=1;i<n;i++){
        for (j=n-i;j>=1;j--){
            printf(" "); }
        printf("*");
        for (k=1;k<=2*i;k++){
            printf(" "); }
        if (k>1){
            printf("*");}
            else {
        printf("\n"); } }
	return 0; }