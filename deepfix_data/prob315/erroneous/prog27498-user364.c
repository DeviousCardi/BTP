#include <stdio.h>
#include <stdlib.h>
int main() {
  int i,n,j,m,max;
  int a[1000],b[1000];
  int count=0;
  m=0;
  max=0;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
	  for(j=i+1;j<n;j++) {
	    if(a[i]>a[j]){
	        count=count+1; }
	  else{
	    continue;
	}}
	b[m]=count;
	max=count+max;
	count=0;
	m=m+1; }
   printf("%d \n",max);
   for(i=0;i<(m-1);i++) {
	{printf("%d ",b[i]);} }
	if(i==(m-1)){printf("%d",b[i]);
	return 0; }