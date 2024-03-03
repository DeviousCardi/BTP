#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cat(int n){
    if(n<=1)
    return 1;
    else
    return ((float)(4*n-2)/(n+1))*cat(n-1); }
int main() {
	int n;
	scanf("%d\n",&n);
	int i,j,r;
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);
	    for(j=0;j<=fabs(a[i]);j++){
	        r=cat(j);
	        if(r>a[i]){
	            printf("%d\n",r);
	            break; } } }
	return 0; }