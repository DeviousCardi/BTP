#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+ 1) {
        for(j=1;j<=n;j=j+ 1) {
            if(j==n-i || j==n)
              printf("*"); }
        printf("\n"); }
	return 0; }