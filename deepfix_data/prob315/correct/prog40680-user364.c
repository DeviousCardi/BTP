#include <stdio.h>
#include <stdlib.h>
int main() {
  int i,n,m;
  int a[1000],b[1000];
  int count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
	    if(a[i]<a[i+1]){
	        count=count+1;
	    b[m]=count; }
	else{
	    continue; } }
   printf("%d \n",count);
   for(i=0;i<count;i++)
	{printf("%d",&b[i]);}
	return 0; }