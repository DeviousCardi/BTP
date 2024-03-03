#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,i,j,k,z,m,n;
    scanf("%d",&h);
    z=h;
    j=z;
    for(i=h;i>0;i--) {
       if(j>0) {
        for(k=h-i;k>0;k--)
           printf(" ");
         for(j=z;j>0;j--) {
            printf("*"); }
        z=z-2;
        n=j; }
       else {
          for(m=n;m<i;m++)
           printf(" ");
          for(j=n;j<h-i;j++)
           printf("*");
          n=n+2; }
         printf("\n"); }
	return 0; }