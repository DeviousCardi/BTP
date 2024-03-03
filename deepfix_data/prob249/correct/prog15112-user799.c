#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i=i- 1) {
        for(j=1;j<=n;j=j+ 1) {
            if(j>=(n+ 1)/2 && (j==n-i+ 1 || j==n))
               printf("*");
            else {
                if(j<=(n+ 1)/2 && (j==n-i+ 1))
                  printf(" ");
                else
                  printf("*"); } }
        printf("\n"); }
	return 0; }