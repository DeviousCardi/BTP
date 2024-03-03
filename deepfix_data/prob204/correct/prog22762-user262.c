#include <stdio.h>
#include <stdlib.h>
int po(int a,int b) {
    int i;
    int c=1;
    for (i=1;i<=b;i++) {
        c=c*a; }
    return c; }
int main() {
	int i,s,n1,n,a[200];
	int num=0,count=0;
	scanf("%d",&n1);
	n = n1;
	for (i=0;n!=0;i++) {
	    a[i]=n%10;
	    n = n/10;
	    count++; }
	for (i=0;i<count;i++) {
	    s = a[i]*po(10,count-i-1);
	    num = num + s; }
	if (num==n1) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	printf ("%d",num);
	return 0; }