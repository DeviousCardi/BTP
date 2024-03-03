#include <stdio.h>
#include <stdlib.h>
int digit(long int k) {
    scanf("%ld",&k);
    int i,value;
    i=1;
    while((k%(pow(10,i))!=0) {
        i=i*10; }
    value=i+1;
    return value; }
int main() {
    int i,n1,n2;
	int a[500],b[500],c[501];
	scanf("%d\n",&n1);
	scanf("%d\n",&n2);
	for(i=0;i<n1;i++) {
	    scanf("%",&a[i]); }
	for(i=0;i<n2;i++) {
	    scanf("%d",&b[i]); }
	return 0; }