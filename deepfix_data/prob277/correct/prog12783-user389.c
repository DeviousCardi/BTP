#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,z;
    scanf("%d",&h);
    z=h;
    for(i=h;i>0;i--) {
        for(k=h-i;k>0;k--)
           printf(" ");
        for(j=z;j>0;) {
            if(j>0)
             j=j-1;
            else
             j=j+1;
            printf("*"); }
        z=z-2;
         printf("\n"); }
	return 0; }