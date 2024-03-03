#include <stdio.h>
#include <stdlib.h>
void HT(int n,char x,char y,char z) {
    if(n>0) {
        HT(n-1,x,z,y);
        HT(n-1,z,y,x); } }
int main() {
	int n,i,count=0,t,a[21];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]);
	    n=a[i];
	    HT(n,'a','b','c'); }
	return 0; }