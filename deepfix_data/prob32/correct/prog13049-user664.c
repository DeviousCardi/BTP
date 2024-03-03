#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k=0;
	int a[21];
	scanf("%d",&n);
	for(i=1;i<n-2;i++) {
	    scanf("%d",&a[i]);
	    if(a[i]>a[i+1]&&a[i+1]<a[i+2])
	  {  k++;}
	  else
	  {continue;} }
	  while(i=0)
	  {if(a[i]<a[i+1])
	  {k++;} }
	  while(i=n-1)
	  {if(a[i]<a[i-1])
	  {k++;} }
	  if(k!=0)
	  {printf("YES");}
	  else
	  {printf("NO");}
    	return 0; }