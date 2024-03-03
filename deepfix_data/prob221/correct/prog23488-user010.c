#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k,blank;
	scanf("%d",&n);
	for (i=n;i>=1;i--){
	    for(blank=0;blank<(n-i);blank++)
	      printf(" ");
	    for (j=i;j<=(2*i-1);j++)
	      printf("*");
	        for(i=n-1;i>0;i--) {
      for(j=0;j<n-i;j++)
            printf(" ");
      printf("*");
       for(k=2*i-3;k>0;k--)
           printf(" ");
      if(i!=1)
            printf("*"); }
	    for (j=0;j<i-1;j++)
	      printf("*");
	printf("\n"); }
	return 0; }