#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i=i- 1) {
        for(j=n;j>=1;j=j- 1) {
            if(j==n-i || j==n)
              printf("*");
            else
                printf(" "); }
        printf("\n"); }
	return 0; }