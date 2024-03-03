#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k=0;
	int a[n];
	scanf("%d",&n);
	for(i=1;i<n-1;i++) {
	    scanf("%d",&a[i]);
	    if(a[i]>a[i+1]&&a[i+1]<a[i+2])
	  {  k++;}
	  else
	  {continue;} }
	  if(k!=0)
	  {printf("YES");}
	  else
	  {printf("NO");}
    	return 0; }