#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,ctr;
    ctr=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(i==1) {
            for(j=1;j<=(n/2);j++)
                printf(" ");
            printf("*"); }
        else {
            for(j=1;j<=n/2;j++)
                printf(" ");
            printf("*");
            for(k=1;k<=ctr;k++)
                printf(" ");
            ctr++;
            printf("*"); }
        printf("\n"); }
	return 0; }