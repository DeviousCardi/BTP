#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,a;
    scanf("%d",&n);
    a=n;
    for(i=n;i<=n;i++){
        for(j=1;j<=i;j++)
       printf(" ");
       a--;
       for(j=1;j<2*i;j++){
           printf("*"); }
         printf("\n\n"); }
	return 0; }