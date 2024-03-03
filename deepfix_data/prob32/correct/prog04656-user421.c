#include <stdio.h>
#include <stdlib.h>
int max(int b,int c,int d) {
    if(b<=c&&b<=d)
    return b ;
     else if(d<=c&&d<=b)
    return d ;
     else
    return c ; }
int main() {
	int i,n,m,e=0;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	for(i=0;i<(n-2);i++) {
	   m=max(a[i],a[i+1],a[i+2]);
	   if(m==a[i+1])
	   e=1; }
	if(e==1)
	printf("Yes");
	else
	printf("No");
	return 0; }