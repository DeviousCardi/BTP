#include <stdio.h>
#include <stdlib.h>
int main() {
    int height,i,j,k;
    scanf("%d",&height);
    i=height;
    j=0;
    while(i>1){
        for(k=0;k<(height-i)/2;k++){
                    printf(" "); }
        for(j=0;j<i;j++){
                printf("*"); }
            for(k=0;k<(height-i)/2;k++){
                    printf(" "); }
            i=i-2;
    printf("\n");}
    while(i<=height){
                    for(k=1;k<(height-i)/2;k++){
                    printf(" "); }
        for(j=0;j<i;j++){
                printf("*"); }
            for(k=1;k<(height-i)/2;k++){
                    printf(" "); }
        i=i+2;
        printf("\n"); }
	return 0; }