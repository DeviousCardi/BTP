#include <stdio.h>
#include <stdlib.h>
int main() {
	 int i,j,k,a;
	 scanf("%d",&a);
	 for (i=1;i<=(a+1)/2;i=i+1) {
	     for(j=1;j<=(a+1)/2;j=j+1) {
	          if(j==5||i+j==6)
	          printf("*");
	          else
	          printf(" "); }
	      printf("\n"); }
	 for (i=(a+3)/2;i<=a;i=i+1) {
        k=(a+1-i);
        for(j=1;j<=(a+1)/2;j=j+1) {
          if(j==5||i+j==6)
	       printf("*");
	       else
	       printf(" "); }
      printf("\n"); }
	return 0; }