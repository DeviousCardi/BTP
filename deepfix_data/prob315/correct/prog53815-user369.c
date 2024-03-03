#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,cn=0;
    scanf("%d",&n);
    int a[n];
    int c[n];
     for(int i=0;i<n;i++)
    { scanf("%d",&a[i]);
      c[i]=0; }
     for(int i=0;i<n;i++) {
	  for(int j=i+1;j<n;j++) {
	     if(a[i]>a[j]&&i<j)
	    {   cn++;
	        c[i]++; } } }
	  printf("%d\n",cn);
	  for(int i=0;i<n;i++)
	  printf("%d ",c[i]);
	return 0; }