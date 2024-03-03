#include <stdio.h>
#include <stdlib.h>
int count;
int HT(int n,char x,char y,char z) {
    if(n>0) {
        count=HT(n-1,x,z,y);
        count++;
        count=count+HT(n-1,z,y,x); }
    return count; }
int main() {
	int n,i,c,t,a[21];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]);
	    n=a[i];
	    c=HT(n,'a','b','c');
	    printf("%d\n",c); }
	return 0; }