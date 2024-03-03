#include <stdio.h>
#include <math.h>
int main() {
       int i,k,j,height,m,base;
       scanf("%d%d",&height,&base);
       for(i=1,m=base-((height-1)*2);i<=height;m=m+2,i=i+1) { {
           for(k=height-1;k>=i;k=k-1) {
               printf(" "); }
           for(j=i;j<=m;j=j+1) {
               printf("%d",j%10); } }
           printf("\n"); }
	return 0; }