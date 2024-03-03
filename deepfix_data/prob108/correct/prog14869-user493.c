#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=(n/2.0)+1;i=i+1){
        for(j=1;j<=i;j=j+1){
            printf("*");
            printf("\n"); }
        for(i=1;i<=(n/2.0);i=i+1){
            for(j=i;j<=(n/2);j=j+1){
                printf("*"); }
             printf("\n"); } }
	return 0; }