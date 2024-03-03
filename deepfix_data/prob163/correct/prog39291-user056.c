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
     char c[d];
      k=t;
      j=s;
      int z;
	for(i=d;i>=0;i--)
	{  z=0;
	    if(a[j]+b[k]>=10)
	    {z=((a[j]+b[k])/10);
	    c[i]=a[i]+b[j]-(10*z);}
	    else
	    c[i]=a[j]+b[k];
	    j--;
	    k--;
	    c[i-1]=+z; }
		for(i=0;i<d;i++) {
	    printf("%d",c[i]); }
	return 0; }