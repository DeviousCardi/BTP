#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i;
	char a[500],b[500],c[501],ch1,ch2;
	scanf("%d %d",&n1,&n2);
	ch1=getchar();
	for (i=0;i<n1;i++) {
	    a[i]=ch1-'0';
	    ch1=getchar(); }
	ch2=getchar();
	for (i=0;i<n1;i++) {
	    b[i]=ch2-'0';
	    ch2=getchar(); }
	return 0; }