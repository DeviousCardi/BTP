#include <stdio.h>
int main() {
    int d,n,i,a[30],j,c;
	scanf("%d%d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&a[i]); }
	for(i=d;i<=n;i++) {
	    a[i]=0;
	    for(j=i-d;j<i;j++) {
	        a[i]=a[i]+a[j]; } }
	for(i=0;i<=n;i++) {
	    printf("%d\n",a[i]); }
	return 0; }