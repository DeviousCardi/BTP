#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,j,l,m;
	scanf("%d",&n);
	m=n;
	if(m>9){
	    m=m-10; }
	for(i=1;i<=n;i=i+1)  {
	   for(k=1;k<n-i+1;k++)   {
       printf(" "); }
      for(j=1;j<=i-1;j=j+1) {
          printf("%d",n-i+j);
      }      printf("%d",n);
      for(l=1;l<i;l++)  {
          printf("%d",n+l);
      }  printf("\n"); }
	return 0; }