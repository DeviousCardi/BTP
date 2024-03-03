#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t_inv=0,c_inv=0,x[1000],y[1000];
	int i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&x[i]); }
	for(i=0;i<n-1;i++)
	{   c_inv=0;
	    for(j=i+1;j<n;j++) {
	        if(x[i]>x[j]) {
	            t=x[i];
	            x[i]=x[j];
	            x[j]=t;
                c_inv++; } }
	     y[i]=c_inv; }
	y[n-1]=0;
	for(i=0;i<n;i++) {
	    t_inv=t_inv+y[i]; }
	printf("%d\n",&t_inv);
	for(i=0;i<n-1;i++) {
	    printf("%d ",&y[i]); }
	printf("%d",y[n-1]);
	return 0; }