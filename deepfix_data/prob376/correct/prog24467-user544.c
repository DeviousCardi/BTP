#include <stdio.h>
#include <stdlib.h>
    int fact(int n) {
        if(n==0)
        return 1;
        else
        return n*fact(n-1); }
int main() {
	int i,p;
	int a[20];
	scanf("%d\n",&p);
	scanf("%d\n",&a[20]);
	for(i=0;i<p;i++){
	scanf("%d\n",&a[i]);
    printf("%d\n",fact(2*a[i])/(fact(a[i]+1)*fact(a[i]))); }
	return 0; }