#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for (i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	    printf("%d\n",catalan(arr[i])); }
	return 0; }
int catalan(int n){
    if(n==1) return 1;
    if(n==0)return 1;
    return (((float)(2*(2*n-1))/(n+1))*catalan(n-1)); }