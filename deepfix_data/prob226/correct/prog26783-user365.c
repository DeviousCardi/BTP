#include <stdio.h>
int main() {
	int d,n;
	scanf("%d %d",&d,&n);
	int b[d];
	int a[n+d];
	int i=0;
	while(i<=d-1){
	    scanf("%d",&b[i]);
	    i++; }
	i=0;
	while(i<=n+d-1){
	    a[i]=0;
	    printf("%d\n",a[i]);
	    i++; }
	for(i=0;i<=d-1;i++){
	    a[i]=b[i]; }
	printf("%d\n",&a[d]);
	for(i=d+1;i<=n-1;i++){
	    a[i]=a[i]+a[i-1]; }
	printf("%d",a[n-1]);
	return 0; }