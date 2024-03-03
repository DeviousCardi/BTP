#include <stdio.h>
#include <stdlib.h>
int catlan(int  n){
    if(n==0)
    return 1;
    else return ((2*(2*n-1))*catlan(n-1))/(n+1); }
int main() {
	int t,i,j,a[100];
	scanf("%d",&t);
	a[0]=1;
	for(i=1;i<100;i++){
	   a[i]=catlan(i);
	   scanf("%d",&j);
	    if(a[i]>j){
	   printf("%d\n",a[i-1]);
	   i=0; } }
	return 0; }