#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[10000],b[10000],j,k,count,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(k=0;k<n;++k) {
      for(j=k,count=0,b[k]=a[j];j<n;++j)
      {if(b[k]==a[j])
      count++;} b[k]=count; }
     for(i=0,x=0;i<n;i++)
     { for(k=0;k<n;k++)
       if(b[i]<b[k]) x=1;}
     {if(x==1) printf("%d",a[i]);}
	return 0; }