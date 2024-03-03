#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,b;
    scanf("%d %d",&n,&b);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)printf(" ");
        for(j=n-i+1;j<=b-n+i;j++)printf("%d",(j+n-1)%10);
        printf("\n"); }
	return 0; }