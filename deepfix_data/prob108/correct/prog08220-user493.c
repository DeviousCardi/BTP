#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,spc;
    scanf("%d",&n);
    for(i=1;i<n;i=i+1){
        for(j=1;j<=i;j=j+1){
            if((j=1)||(j=n+1/2)){
        printf("*"); }
        else
        printf(" "); }
       printf("\n"); }
	return 0; }