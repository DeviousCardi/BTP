#include <stdio.h>
int main() {
	int d,n;
	scanf("%d%d",&d,&n);
	int b[d];
	for(int i=0;i<d;i++){
	    scanf("%d",b+i); }
	int a[n];
	for(int i=0;i<d;i++)
	    a[i]=b[i];
	for(int i=d;i<n;i++){
	    for(int k=i-d;k<i;k++)
	        a[i]+=a[k]; }
	printf("%d",a[n-1]);
	return 0; }