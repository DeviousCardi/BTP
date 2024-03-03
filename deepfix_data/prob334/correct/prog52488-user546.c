#include <stdio.h>
#include <math.h>
int main() {
       int i,j,height;
       scanf("%d",&height);
       for(i=1;i<=height;i=i+1) {
           for(j=i;j<3*i-2;j=j+1) {
               printf("%d",j%10); }
           printf("\ n"); }
	return 0; }