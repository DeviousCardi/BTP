#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=0;j<=i+1;j++)
        printf(" ");
        for(k=i;k<=2*n+1;k++) {
        if(k<9)
        printf("%d",k);
        else
        printf("%d",k%10); }
       printf("\n"); }
	return 0; }