#include <stdio.h>
#include <stdlib.h>
int a[16];
int cat(int n){
    a[0]=1;
    a[n]=cat(n-1)*2*(2*n-1)/(n+1);
        return a[n]; }
int main() {
	int t,i;
	scanf("%d\n",&t);
	int b[1000];
	for(i=0;i<t;i++){
	    scanf("%d",&b[i]); }
	printf("%d",a[10]);
	return 0; }