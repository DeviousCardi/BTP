#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2;
	char a[500],b[500],c[501];
	scanf("%d\n",&n1);
	scanf("%d\n",&n2);
	for(i=0;i<n1;i++) {
	    scanf("%c",&a[i]); }
		for(i=0;i<n1;i++) {
	    scanf("%c",&b[i]); }
	if(n1>=n2) {
	    max=n1;
	    for(i=n1-1;i>(n2-1);i--) {
	        c[i]=a[i]; } }
		for(i=n2-1;i>=0;i--) {
	    c[i]=a[i]+b[i]; }
	else
	if(n2>n1) {
	    max=n2;
	    for(i=n2-1;i>(n1-1);i--) {
	        c[i]=b[i]; } }
		for(i=n1-1;i>=0;i--) {
	    c[i]=a[i]+b[i]; }
	for(i=0;i<max;i++)
	printf("%c",c[i]);
	return 0; }