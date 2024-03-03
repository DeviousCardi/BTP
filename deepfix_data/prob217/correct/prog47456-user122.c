#include <stdio.h>
#include <stdlib.h>
int main() {
	 int array[10000],i,c,n,s;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	   scanf("%d",&array[i]);
	 scanf("%d",&s);
	 for(i=0;i<n-1;i++) {
	      for(c=i+1;c<n;c++) {
	          if(array[i]+array[c]!=s)
	            continue;
	          else
	            printf("(array[i],array[c]");
	            break; } }
	return 0; }