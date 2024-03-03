#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,spc;
    scanf("%d",&n);
    for(i=1;i<n;i=i+1){
        for(j=i;j<=n+1/2;j=j+1){
            if((j=1)||(j=n+1/2)){
        printf("*"); }
        else
        printf(" "); }
       printf("\n"); }
	return 0; }