#include <stdio.h>
int main() {
    int d,n,i,j;
    scanf("%d %d ",&d,&n);
    int b[20];int a[30];
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]); }
    for(i=0;i<d;i++) {
        a[i]=b[i]; }
    if(n>=d) {
	for(i=d;i<n;i++) {
	    a[i]=0;
	    for(j=1;j<=d;j++) {
	        a[i]=a[i]+a[i-j]; } } }
	printf("%d",a[n]);
	return 0; }