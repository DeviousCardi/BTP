#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,a;
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i++){
        for(j=1;j<a;j++)
        a--;
        for(j=1;j<=2*a;j++){
             printf("*"); }
         printf("\n"); }
	return 0; }