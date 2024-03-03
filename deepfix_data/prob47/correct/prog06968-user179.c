#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int sum=0,i;
    if(n==0 || n==1) return 1;
    for(i=0;i<n;i++){
        sum+=cat(i)*cat(n-i-1); }
    return sum; }
int main() {
	int t,i,a[20];
	scanf("%d\n",&t);
	for(i=1;i<t;i++){
	    scanf("%d\n",&a[i]); }
	for(i=0;i<t;i++){
	    printf("%d",cat(a[i]));
	    printf("\n"); }
	return 0; }