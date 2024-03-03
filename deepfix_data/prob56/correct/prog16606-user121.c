#include <stdio.h>
#include <stdlib.h>
int cat(int n,int k){
    int r;
    if(k<=0)
    r=1;
    else{
    n++;
    r=(n+2)/(4*n+2)*cat(n+1,k); }
    if(r>k)
    return r;
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