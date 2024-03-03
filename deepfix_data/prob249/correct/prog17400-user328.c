#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,m;
	scanf("%d",&h);
	m=(h+1)/2;
	for (i=1;i<=h;i++) {
	  for(j=i;j<=m;j++) {
	      if((j==m)||(i+j==(m-1))||(i-j==3))
	       printf("*");
	      else
	      printf(" "); }
	  printf("\n"); }
	return 0; }