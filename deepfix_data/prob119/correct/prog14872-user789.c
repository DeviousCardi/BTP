#include <stdio.h>
#include <stdlib.h>
int count=0;
void HT(int n,char x,char y,char z) {
    if(n>0) {
        HT(n-1,x,z,y);
        count++;
        HT(n-1,z,y,x); } }
int main() {
	int n,i,count=0,t,a[21];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]);
	    n=a[i];
	    HT(n,'a','b','c');
	    printf("%d",count); }
	return 0; }