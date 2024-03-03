#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[10000],b[10000],j,k,count,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(k=0;k<n;++k) {
      for(j=k,count=0,b[k]=a[j];j<n;++j)
      {if(b[k]==a[j])
      count++;} b[k]=count+1;}
  for(i=0;i<n;i++)
  { for(k=0;k<n;k++)
     {if(b[i]<b[k]) x=1;}
     if (x==0) printf("%d",a[i]);}
return 0; }