#include <stdio.h>
int main() {
	int d,n,i,j;
	scanf("%d%d",&d,&n);
	int a[30],b[20];
	for (i=0;i<d;i++)
	  scanf("%d",&b[i]);
	for (i=0;i<d;i++){
	  a[i]=b[i]; }
	for (i=d;i<=n;i++) {
	    for (j=i-1;j>=i-d;j--) {
	        a[i]=a[i]+a[j]; } }
	  printf("%d",a[n]);
	return 0; }