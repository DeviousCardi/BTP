#include <stdio.h>
#include <stdlib.h>
int main() {
       int i,j,height;
       scanf("%d",&height);
       for(i=1;i<height;i=i+1) {
           for(j=i;j<2*i;j=j+1) {
               if(j>9) {
                   j=j%10;
                   printf("%d",j); }
               else {
                   printf("%d",j); }
               printf("%d",j); }
           printf("\n"); }
	return 0; }