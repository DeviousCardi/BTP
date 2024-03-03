#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i=i++){
    for (j=1;j<=(2*n+1);j=j++){
    printf("%c",'*');
    }    printf("\n"); }
	return 0; }