#include <stdio.h>
#include <stdlib.h>
int main() {
             int n,x,y,k,j,gap=0;
             scanf("%d",&n);
             j=n;
             for(x=n;x>=0;x--) {
                 for(k=gap;k>=1;k--) {
                    printf(" "); }
                  gap=gap+1;
                 for(y=1;y<=j;y++) {
                     printf("*"); }
                 j=j-2;
                 printf("\n"); }
             gap=n-1;
                 for(k=gap;k>=1;k--) {
                    printf(" "); }
                  gap=gap+1;
                 for(y=j;y<=1;y++) {
                     printf("*"); }
                 j=j+2;
                 printf("\n");
	return 0; }