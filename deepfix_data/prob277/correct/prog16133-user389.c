#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,z,m,n,l=3;
    scanf("%d",&h);
    z=h;
    j=z;
     for(i=h;i>0;i--) {
       if(z>0) {
        for(k=h-i;k>0;k--)
           printf(" ");
        for(j=z;j>0;j--) {
            printf("*"); }
        z=z-2; }
        printf("\n"); }
	return 0; }