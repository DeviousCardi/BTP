#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int k,r;
    if(n==0)
    return 1;
    for(k=2;k<=n;k++)
    r=(k+n)/k;
    return r; }
int main() {
	int n;
	scanf("%d\n",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);
	    printf("%d\n",cat(a[i])); }
	return 0; }