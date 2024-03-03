#include <stdio.h>
#include <stdlib.h>
int main() {
	int s,n,a[200];
	int num=0,count=0;
	scanf("%d",&n);
	for (i=0;n!=0;i++) {
	    a[i]=n%10;
	    n = n/10;
	    count++; }
	for (i=count;i>=0;i--) {
	    s = a[i]*po(10,i);
	    num = num + s; }
	if (num==n) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }