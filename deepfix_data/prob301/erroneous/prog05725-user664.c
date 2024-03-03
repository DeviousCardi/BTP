#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
	int n,i,m;
	scanf("%d",&n);
	int a[n];
	int count[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    for(j=0;j<n;j++) {
	        if(a[i]==a[j])
	        {count[i]++;} } }
	count[m]=max(count[n]);
	printf("%d",m);
	return 0; }