#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=1;j<=(n+1)/2;j++) {
            if(j==(n+1)/2||j==((n+1)/2)-i)||j==(n-i-1))
            printf("*");
            else
            printf(" "); }
          printf("\n"); }
	return 0; }