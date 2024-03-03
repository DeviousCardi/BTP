#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
	for(i=3;i>=1;i=i-1){
	    for(j=i;j<=3;j=j+1){
	        printf("%d",j); }
	    printf("\n");}
    for(i=2;i>=1;i=i+1){
        for(j=i;j<=3;j=j+1){
            printf("%d",j); }
        printf("\n"); }
    return 0;}