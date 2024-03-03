#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1) {
        for(k=n;k>=0;k=k-1)
        {printf(" "); }
        for(j=1;j<=i;j=j+1)
            {printf("*"); }
        printf("\n"); }
	return 0; }