#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=1;j<=(2*n-1);j++) {
             if(i==1)  printf("*");
             else {
                 if(j==i) printf("*");
                 else  break; } }
        printf("\n"); }
	return 0; }