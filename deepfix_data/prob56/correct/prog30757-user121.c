#include <stdio.h>
#include <stdlib.h>
int cat(int n,int k){
    int i,r=1;
    if(n==0&&n==1)
    return 1;
    for(i=2;i<=n;i++){
        r*=(i+n)/i;
        if(k<r)
        return r; } }
int main() {
	int n;
	scanf("%d\n",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);
	    printf("%d\n",cat(i+2,a[i])); }
	return 0; }