#include <stdio.h>
#include <math.h>
int main() {
       int i,k,j,height,m;
       scanf("%d",&height,&base);
       for(i=1,base=1;i<=height;base=base+1;i=i+1) { {
           for(k=height-1;k>=i;k=k-1) {
               printf(" "); }
           for(j=i;j<2*i+base+3;j=j+1) {
               printf("%d",j%10); } }
           printf("\n"); }
	return 0; }