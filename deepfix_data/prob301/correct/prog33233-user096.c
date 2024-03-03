#include <stdio.h>
#include <stdlib.h>
int main() {
	 long long int a[10000],n,i;
	scanf ("%lld",&n);
	for (i=0;i<n;i++){ {
	    scanf ("%lld",&a[i]); }
	if (i==0){
	    printf ("%lld",a[i]); }
	if (i>0&&i<n){
	    if (a[i]-a[i-1]==0){
	        printf ("%lld",a[i]);
	        break; } } }
	return 0; }