#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,c;
    scanf("%d",&n);
    for(i=0;i<n/2+1;i++) {
        c=1;
        for(k=i;k<n/2;k++,c++) {
            printf(" "); }
        for(j=0;j<i*2+1;j++) {
            printf("%d",c%10) }
        printf("\n"); }
	return 0; }