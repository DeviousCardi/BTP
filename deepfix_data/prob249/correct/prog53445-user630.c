#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
        scanf("%d",&n);
        for(i=0;i<(n/2)+1;i++) {
            for(j=0;j<(n/2)-i;j++) {
                printf(" "); }
            printf("*");
            if(i!=0) {
                for(j=1;j<i;j++) {
                    printf(" "); }
                printf("*"); }
            printf("\n"); }
        for(i=1;i<=(n/2);i++) {
            for(j=1;j<=i;j++) {
                printf(" "); }
            printf("*");
            if(i!=((n-1)/2)) {
                for(j=1;j<=(n/2)-1-i;j++) {
                    printf(" "); }
                printf("*"); }
            printf("\n"); }
	return 0; }