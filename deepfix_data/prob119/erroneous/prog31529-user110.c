#include <stdio.h>
#include <stdlib.h>
int toH(int n,int a,int b,int c){
    int count=0;
    if (n>0) {
        count=toH(n-1,a,c,b);
        count++;
        count=count+toH(n-1,c,b,a); }
    return count; }
int main() {
	int t,i,k;
	int a,b,c;
	scanf ("%d",&t);
	for (i=1;i<=t;i++) {
	    scanf ("%d\n",&k);
	    printf("%d\n",toH(k,x,y,z)); }
	return 0; }