#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k=0;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    if(a[i]>a[i+1]&&a[i+1]<a[i+2]||a[0]<a[1]||a[n]<a[n-1])
	  {  k++;}}
	  if(k!=0)
	  {printf("YES");}
	  else
	  {printf("NO");}
    	return 0; }