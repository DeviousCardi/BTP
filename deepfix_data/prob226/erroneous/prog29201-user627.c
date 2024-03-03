#include <stdio.h>
int an(int,int);
int main() {
    int d,n,i,a[30],j,c;
	scanf("%d%d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&a[i]); }
	printf("%d",an(a[],n));
	return 0; }
int an(int a[],int n) {
    int i,j;
	for(i=d;i<=n;i++) {
	    a[i]=0;
	    for(j=i-d;j<i;j++) {
	        a[i]=a[i]+a[j]; } } }