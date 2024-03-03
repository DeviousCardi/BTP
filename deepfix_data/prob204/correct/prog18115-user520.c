#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	long long int n, rev_n=0,temp;
	int i, digits=0;
	scanf("%lld", &n);
	for(temp=n;temp>0;) {
	    temp=temp/10;
	    digits=digits+1; }
	int a[digits], b[digits];
	for(i=0;i<digits;i++) {
	    a[i]=n%10;
	    n=n/10; }
	for(i=0;i<digits;i++) {
	    b[i]=a[digits-i-1]; }
	for(i=0;i<digits;) {
	    if(a[i]==b[i])
	    i=i+1;
	    else
	    break; }
	if(i==digits-1)
	printf("Yes");
	else printf("No");
	return 0; }