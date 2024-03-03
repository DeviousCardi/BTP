#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int lptgn(int n);
int main() {
	int n,a;
	scanf("%d\n",&n);
	int num[50];
	lptgn(n)=a;
	for(i=a-1;i>=0;i--) {
	    num[i]=n%(pow(10,a-i))-num[i+1]; }
	for(j=0;j<=(n+1)/2;j++)
	if(num[j]=num[a-1-j])
	    printf("Yes");
	    else
	    printf("No");
	return 0; }
int lptgn(int n) {
    int i,a;
    for(i=0;i<n/2;i++) {
        if(n<=pow(10,i))
        a=i; break; }
    return (a); }