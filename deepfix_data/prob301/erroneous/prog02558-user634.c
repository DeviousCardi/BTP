#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,c,j,pos=0;
	scanf("%d",&n);
	int a[n];
	int mode[n];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	int h=a[0];
	for(i=0;i<n;i++) {
	    c=0;
	    for(j=0;j<n;j++) {
	        if(a[i]==a[j])
	        c++; }
	    b[i]=c; }
	for(i=0;i<n;i++) {
	    if(h<=b[i]) {
	        h=b[i];
	        pos=i; } }
	printf("%d",a[pos]);
	return 0; }