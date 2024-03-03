#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k=0;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	  while(i=0)
	  {if(a[0]<a[1])
	  {k++;} }
	  while(i=(n-1))
	  {if(a[n-1]<a[n-2])
	  {k++;} }
	  while(i>0&&i<n-1)
	    {if(a[i]>a[i+1]&&a[i+1]<a[i+2])
	  {  k++;}
	  else
	  {continue;}
	  }}
	  if(k!=0)
	  {printf("YES");}
	  else
	  {printf("NO");}
    	return 0; }