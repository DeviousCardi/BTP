#include <stdio.h>
#include <stdlib.h>
int cat(int n,int k){
    int r;
    if(n==0)
    return 1;
    else{
    r=fact(2*n)/(fact(n+1)*fact(n));
    if(r>k)
    return r; } }
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
	    printf("%d\n",cat(i+2,a[i])); }
	return 0; }