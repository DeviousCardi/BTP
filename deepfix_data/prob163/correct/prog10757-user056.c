#include <stdio.h>
#include <stdlib.h>
int main() {
	int s,t;
	scanf("%d",&s);
	scanf("%d",&t);
	int a[s],b[t];
	int i,j,k;
	for(i=0;i<s;i++) {
	    scanf("%1d",&a[i]); }
	for(i=0;i<t;i++) {
	    scanf("%1d",&b[i]); }
	int d=((s>t)?:(s+1),(t+1));
     int c[d];
      k=t;
      j=s;
	for(i=d;i>=0;i--)
	{  if(k>=0&&j>=0)
	    c[i]=a[j]+b[k];
	    else if (k<=0)
	     c[i]=a[j];
	     else if (j<=0)
	    c[i]=b[k];
	    j--;
	    k--; }
		for(i=0;i<d;i++)
	{if(c[i]==0)
	continue;
	   printf("%d",c[i]); }
	return 0; }