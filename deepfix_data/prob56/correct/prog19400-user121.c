#include <stdio.h>
#include <stdlib.h>
int cat(int k){
    int r,n=1;
    r=fact(2*n)/(n+1)*fact(n)*fact(n);
    n++;
    if(r>k)
    return r;
    else
    cat(k);
    return 0; }
int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1); }
int main() {
	int n;
	scanf("%d\n",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);
	    printf("%d\n",cat(a[i])); }
	return 0; }