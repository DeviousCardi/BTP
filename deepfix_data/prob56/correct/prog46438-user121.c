#include <stdio.h>
#include <stdlib.h>
int cat(int n,int k){
    int r;
    if(n<=0)
    r=1;
    else
    if(r>k)
    return r;
    else
    r=(4*n-2)/(n+1)*cat(n-1,k);
    return 0; }
int main() {
	int n;
	scanf("%d\n",&n);
	int i,r=1;
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);
	    printf("%d\n",cat(r,a[i])); }
	return 0; }