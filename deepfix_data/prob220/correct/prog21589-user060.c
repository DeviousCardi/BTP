#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a,b,n,j;
    scanf("%d%d",&n,&b);
    for (i=1;i<n;i++){
        printf("*");
        for (j=2;j<i;j++){
            printf(" "); }
        if (i>1){
            printf("*\n");} }
	return 0; }