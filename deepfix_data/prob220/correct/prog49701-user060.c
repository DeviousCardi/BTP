#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a,n,j;
    scanf("%d",&n);
    for (i=1;i<n;i++){
        printf("*");
        for (j=2;j<i;j++){
            printf(" "); }
        if (i>1){
            printf("*\n");}
            else {printf("\n");} }
        for (a=1;a<=n;a++){
            printf("*"); }
	return 0; }