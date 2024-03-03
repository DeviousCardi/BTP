#include <stdio.h>
int main() {
	int d,n;
	scanf("%d %d",&d,&n);
	int b[d];
	int a[n];
	int i=0;
	while(i<=d-1){
	    scanf("%d",&b[i]);
	    i++; }
	a[0]=b[0];
	for(i=1;i<=d-1;i++){
	    a[i]=b[i]; }
	for(i=d-1;i<=n-1;i++){
	    a[i]=a[i]+a[i-1]; }
	printf("%d",a[n-1]);
	return 0; }