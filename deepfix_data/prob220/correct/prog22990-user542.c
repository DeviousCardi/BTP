#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,h , k;
    scanf("%d",&h);
    for(i=1;i<=h;i++) {
        for(j=(h-1);j>=0;j--) {
            printf(" "); }
        printf("*");
        if((i==1)||(i==h)) {
            continue; }
        for(k=0;k<=(2*i-3);k++) {
            printf(" "); }
        printf("*");
        printf("\n"); }
	return 0; }