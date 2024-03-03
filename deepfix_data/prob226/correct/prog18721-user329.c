#include <stdio.h>
int main() {
	int d,n,i,arr[35],sum=0,j;
	scanf("%d%d", &d, &n);
	for(i=0; i<d; i++) {
	        scanf("%d", &arr[i]); }
    for(i=0; i<d; i++) {
            sum=sum+arr[i]; }
    arr[i]=sum;
    for(j=0;j<n;j++,i++) {
            arr[i]=arr[i] + arr[i-1]; }
    printf("%d",arr[n]);
	return 0; }