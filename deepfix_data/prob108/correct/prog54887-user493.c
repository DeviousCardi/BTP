#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,spc;
    scanf("%d",&n);
    for(i=1;i<n;i=i+1){
        for(j=i;j<i*2;j=j+1){
            if (j> n/2)
            return 0;
        printf("*"); }
       printf("\n"); }
	return 0; }