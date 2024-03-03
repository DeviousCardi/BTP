#include <stdio.h>
#include <stdlib.h>
int main() {int n,i,j,k;
    scanf("%d"&n);t=(n-1)/2
    for(i=(n+1)/2;i>=1;i--) {
        for(k=t;k>=0;k--) {
            printf(" ");
        }for(j=i;i<=(n+1)/2;j++)
        {printf("%d",j);}
    }t=t-1;printf("\n");}
	return 0; }