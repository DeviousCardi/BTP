#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(j=1;j<=2*n+1;j++) {
	        for(k=n+1-j;k>=0;k--) {
	             printf(" "); }
        if(j<=n+1) {
                for(i=1;i<=j;i++) {
                    if(i%2==1) {
	                       printf("x"); }
                    else {
                        printf("*"); } } }
        else {
            for(k=0;k<=j-(n+1);k++) {
                printf(" "); }
            for(i=1;i<=2*n+2-j;i++) {
                    if(i%2==1) {
                        printf("x"); }
                    else {
                            printf("*"); } } }
        printf("\n"); }
	return 0; }