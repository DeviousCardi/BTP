#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{int k=0;
	    scanf("%d",&a[i]);
	    if((a[i]>a[i+1])&&(a[i+1]<a[i+2]))
	  {  k++;
	  if(k!=0)
	  {printf("YES");}
	  else
	  {printf("NO");} } }
	return 0; }