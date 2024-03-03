#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=1;j<=n;j++) {
            if(j==(n-i)||j==n)
            printf("*");
            printf("\t"); }
          printf("\n"); }
	return 0; }