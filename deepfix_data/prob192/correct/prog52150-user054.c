#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=1;i<=(n/2+1);i++) {
        for(j=1;j<=(3+i);j++) {
            if(j>=(n/2-i)){printf("*");}
            else{printf(" ");} }
        printf("\n"); }
	return 0; }