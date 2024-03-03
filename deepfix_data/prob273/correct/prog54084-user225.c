#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,h,k,a;
    char c='*';
    scanf("%d",&h);
    a=h%2+1;
    for( i=1; i<=h;i++) {
        for(k=a-1; k>=0;k--) {
            printf(" "); }
        if (i<=a) {
            for(j=1;j<=a;j++) {
                printf("%c",c); } }
            printf("\n"); }
	return 0; }