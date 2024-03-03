#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t_inv=0;c_inv=0,x[];
	int i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&x[i]); }
	for(i=0;i<n-1;i++)
	{   t_inv=0;c_inv=0;
	    for(j=i+1;j<n;j++) {
	        if(x[i]>x[j]) {
	            t=x[i];
	            x[i]=x[j];
	            x[j]=t;
                c_inv++; } }
	    t_inv+=c_inv;
	    printf("%d",t_inv);
	    for(i=0;i<n;i++) {
	        printf("%d",c_inv);
	        if(i<n) {
	        printf(" "); } } }
	return 0; }