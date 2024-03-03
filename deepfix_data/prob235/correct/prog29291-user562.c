#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,p;
    scanf("%d",&n);
    p=(n/2)+1;
    for(i=1;i<=n;i++) {
        if(i<=p) {
            for(k=1;k<=p-i;k++)
            printf(" ");
            for(j=p-i+1;j<=p+i-1;j++)
            printf("%d",j);
            printf("\n"); }
        else {
            for(k=p+1;k<=i;k++)
            printf(" ");
            for(j=(i-p)+1;j<=9-(i-p);j++)
            printf("%d",j);
            printf("\n"); } }
	return 0; }