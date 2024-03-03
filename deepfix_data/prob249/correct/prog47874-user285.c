#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,k,j;
	scanf("%d",&h);
    for(i=0;i<h;i++) {
        for(j=i;j<h/2;j++) {
            printf(" "); }
        for(k=0;k<i+1;k++) {
            printf("*"); }
        printf("\n"); }
	      return 0; }