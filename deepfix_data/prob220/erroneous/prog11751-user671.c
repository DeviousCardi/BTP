#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,j,n,;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
    for (j=1;j<=(2*n-1);j++){
    if((i+j==(n+1))||(i+j==n-1)){
    printf("%c",'*'); }
    }    printf("\n"); }
	return 0; }