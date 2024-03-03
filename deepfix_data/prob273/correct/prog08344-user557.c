#include <stdio.h>
#include <stdlib.h>
int main() {
    int height,ini,i,j,k,l;
    scanf("%d",&height);
    ini=(height+1)/2;
    for(i=0;i<height/2;i++){
        for(j=0;j<=i;j++){
            printf("%d",ini+j); }
        ini=ini-1; }
	return 0; }