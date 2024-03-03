#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,l;
    scanf("%d",&n);
    l=n/2+1;
    for(i=1;i<=n;i++)
    {   l--;
        for(j=1;j<=i;j++) {
            printf("%d",l%10); }
        printf("\n"); }
	return 0; }