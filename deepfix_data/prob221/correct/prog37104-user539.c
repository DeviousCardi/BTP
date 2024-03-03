#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,n,j,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n*2-1;j++) {
            if(i==1) {
                printf("*"); }
            else if(2<=i||i<=n) {
                if((j==i)||(j==2*n-1)) {
                    printf("*"); }
                else {
                    printf(" "); } } }
     printf("\n"); }
	return 0; }