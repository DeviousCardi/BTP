#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,c;
    scanf("%d",&n);
    c=n/2+1;
    for(i=0;i<(n/2+1);i++) {
        for(k=i;k<(n/2+1);k++) {
            printf(" "); }
        for(j=0;j<=i;j++) {
            printf("%d",c%10);
            c++; }
        printf("\n"); }
	return 0; }