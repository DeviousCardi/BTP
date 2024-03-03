#include <stdio.h>
int main() {
	int d,n,i,arr[35],sum=0;
	scanf("%d%d", &d, &n);
	for(i=0; i<d; i++) {
	        scanf("%d", &arr[i]); }
    for(i=0; i<n; i++) {
            sum+ = arr[i]; }
    printf("%d",sum);
	return 0; }