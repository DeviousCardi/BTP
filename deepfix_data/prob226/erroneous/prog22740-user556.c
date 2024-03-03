#include <stdio.h>
int main() {
	int d,n;
	scanf("%d%d",&d,&n);int b[d],a[n],i;
	for(i=0;i<n;i<d;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++) {
	    if(i<d)
	    a[i]=b[i];
	    else {
	        for(j=1;j<=d;j++)
	        a[i]+=a[i-j]; } }
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0; }