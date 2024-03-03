#include <stdio.h>
#include <stdlib.h>
int catlan(int  n){
    if(n==0)
    return 1;
    else return ((2*(2*n-1))*catlan(n-1))/(n+1); }
int main() {
	int t,i,j,w,p,a[100];
	scanf("%d",&t);
	for(i=0;i<50;i++)
	   a[i]=catlan(i);
	for(j=0;j<t;j++){
	    scanf("%d",w);
	    p=0;
	    while(a[p]<w)
	    p++;
	    printf("%d",a[p-1]); }
	return 0; }