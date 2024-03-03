#include <stdio.h>
#include <stdlib.h>
int main() {
	 int array[10000],i,c,N,S;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	   scanf("%d",&array[i]);
	 scanf("%d",&S);
	 for(i=0;i<N-1;i++) {
	      for(c=i+1;c<N;c++) {
	          if(array[i]+array[c]!=S)
	            continue;
	          else
	            printf("(%d,%d)\n",array[i],array[c]);
	            break; } }
	return 0; }