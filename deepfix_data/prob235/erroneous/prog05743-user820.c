#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=((n+1)/2+i-1);j++) {
            if(i<=((n+1)/2)-i)
            printf(" ");
            else
            printf("%d",j%10); }
        printf("\n";) }
	return 0; }