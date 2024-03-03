#include <stdio.h>
#include <stdlib.h>
int po(int a,int b) {
    int i;
    int c=1;
    for (i=1;i<=b;i++) {
        c=c*a; }
    return c; }
int main() {
	int i,s,n,a[200];
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
	printf ("%d",num);
	return 0; }