#include <stdio.h>
#include <stdlib.h>
int main() {
    int height,i,j,k;
    scanf("%d",&height);
    for(i=1;i<height;i++){
        printf("*"); }
    printf("\n");
    height--;
    for(i=height;i>0;i--){
        for(j=1;j<=(height-i);j++){
            printf(" "); }
        printf("*");
        for(k=1;k<(2*i-2);k++){
            printf(" "); }
        printf("*");
        printf("\n"); }
	return 0; }