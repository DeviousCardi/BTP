#include <stdio.h>
int main() {
	int d,n,i,k;
	int a[40],b[30];
	scanf("%d %d\n",&d,&n);
	for(i=0;i<d;i=i+1) {
	    scanf("%d",&b[d]); }
	if(n<d) {
	    for(j=0;j<=n;j=j+1) {
	        a[j]=b[j]; } }
	else
	{a[n]=0;
	    for(k=n-1;k<=n-d;k=k-1) {
	        a[n]=a[n]+b[k]; } }
	printf("%d",a[n]);
	return 0; }