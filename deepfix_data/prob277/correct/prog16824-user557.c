#include <stdio.h>
#include <stdlib.h>
int main() {
    int height,i,j;
    scanf("%d",&height);
    for(i=0;i<((height+1)/2);i++){
        for(j=0;j<i;j++){
            printf(" "); }
        for(j=0;j<(height-2*i);j++){
            printf("*"); }
        for(j=0;j<i;j++){
            printf(" "); }
        printf("\n"); }
	return 0; }