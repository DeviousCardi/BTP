#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a,b,n,j;
    scanf("%d",&n);
    for (i=1;i<n;i++){
        for (b=2*n -1;b>0;b=b-1){
            printf(" ");
        printf("*");
        for (j=1;j<i;j++){
            printf(" "); } }
            printf("\n");}
        for (a=1;a<=n;a++){
            printf("*"); }
	return 0; }