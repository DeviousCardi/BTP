#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n+1;i=i+1) {
        for(j=1;j<=n+1-i;j=j+1)
            printf(" ");
        for(j=1;j<=i;j=j+1)
            if((i+j)%2==0)
               printf("%dx",i+j);
            else
               printf("*");
        printf("\n"); }
	return 0; }