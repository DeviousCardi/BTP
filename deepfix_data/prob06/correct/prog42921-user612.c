#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y,i,j=0;
	scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
	long int a[n],b[m];
	for(i=0;i<n;i++) {
	    scanf("%ld",a+i); }
	for(i=0;i<m;i++) {
	    scanf("%ld",(b+i)); }
	for(i=0;i<m;) {
	    if((b[i]>=a[j]-x)&&(b[i]<=a[j]+y)) {
	        printf("%ld %ld\n",j,i);
	        i++;
	        j++; }
	    else if(b[i]<a[j]-x) {
	        i++;
	        continue; }
	    else if(b[i]>a[i]+y) {
	        j++;
	        continue; } }
	return 0; }