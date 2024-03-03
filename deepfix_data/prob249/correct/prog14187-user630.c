#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
        scanf("%d",&n);
        for(i=1;i<(n/2)+1;i++) {
            for(j=1;j<=(n/2)-i;j++) {
                printf(" "); }
            printf("*");
            if(i) {
                for(j=0;j<i-1;j++) {
                    printf(" "); }
                printf("*"); }
            printf("\n"); }
        for(i=0;i<(n/2);i++) {
            for(j=0;j<=i;j++) {
                printf(" "); }
            printf("*");
            if(i!=((n/2)-1)) {
                for(j=0;j<(n/2)-2-i;j++) {
                    printf(" "); }
                printf("*"); }
            printf("\n"); }
	return 0; }