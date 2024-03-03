#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for (i=0;i<=n-2;i++){
    for (j=1;j<=(2*n-1);j++){
    if((i+j==n)||(i+j==n-2)){
    printf("%c",'*'); }
    }    printf("\n"); }
	return 0; }