#include <stdio.h>
int a[30],b[20];
int main() {
	int d,n,i,j;
	scanf("%d%d",&d,&n);
	for (i=0;i<d;i++)
	  scanf("%d",&b[i]);
	for (i=0;i<=n;i++){
	  if (i<d)
	     a[i]=b[i];
	  else
	     a[i]=0; }
	for (i=d;i<=n;i++) {
	    for (j=i-1;j>=i-d;j--) {
	        a[i]=a[i]+a[j]; } }
	  printf("%d",a[n]);
	return 0; }