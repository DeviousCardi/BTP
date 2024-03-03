#include <stdio.h>
#include <stdlib.h>
int a[16];
int cat(int n){
    if(n==1)
        return 1;
    else
        return cat(n-1)*2*(2*n-1)/(n+1); }
int main() {
	int t,i,j;
	scanf("%d\n",&t);
	int b[1000],a[100];
	for(i=0;i<t;i++){
	    scanf("%d\n",&b[i]); }
	for(j=0;j<17;j++){
	    a[j]=cat(j); }
	printf("%d",cat(5));
	return 0; }