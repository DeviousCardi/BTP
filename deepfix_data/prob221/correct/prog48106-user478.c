#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,a;
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i--){
        for(j=1;j<=a;j++) {
             printf("*");
             a--; }
         printf("\n\n"); }
	return 0; }