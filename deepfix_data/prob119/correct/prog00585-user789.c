#include <stdio.h>
#include <stdlib.h>
int count=0;
void HT(int n,char x,char y,char z) {
    if(n>0) {
        HT(n-1,x,z,y);
        HT(n-1,z,y,x);
        count++; } }
int main() {
	int n,i,t,a[21];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]);
	    n=a[i];
	    HT(n,'a','b','c');
	    printf("%d\n",count); }
	return 0; }