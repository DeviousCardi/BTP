#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
        if(i<(n/2)+1) {
            for(j=1;j<=n/2+1;j++) {
                if(i+j<=n/2+1)
                printf("\t");
                else
                printf("%d",j); } }
        else {
            for(j=i-(n/2+1);j<=n/2+1;j++) {
                if(i-j>=n/2+1)
                printf("\t");
                else
                printf("%d",j); } } }
    printf("\n");
	return 0; }