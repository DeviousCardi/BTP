#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,a;
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i++){
        for(j=1;j>a;j++)
        a++;
        for(j=1;j<=2*i;j++){
             printf("*"); }
         printf("\2n"); }
	return 0; }