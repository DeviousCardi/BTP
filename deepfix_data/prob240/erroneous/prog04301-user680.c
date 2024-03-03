#include <stdio.h>
#include <stdlib.h>
int catlan(int  n){
    int sum=0,i;
    for(i=1;i<n;i++)
    sum=sum+catlan(i)catlan(n-i);
     if(n==0)
    return 1;
    else return sum; }
int main() {
	int t,i,j,w,p,a[100];
	scanf("%d",&t);
	for(i=0;i<50;i++)
	   a[i]=catlan(i);
	for(j=0;j<t;j++){
	    scanf("%d",&w);
	    p=0;
	    while(a[p]<w)
	    p++;
	    printf("%d\n",a[p-1]); }
	return 0; }