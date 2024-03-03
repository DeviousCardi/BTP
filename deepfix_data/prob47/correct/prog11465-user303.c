#include <stdio.h>
#include <stdlib.h>
int cat(int a){
    if(a==1)
    return 1;
    if(a==0) return 1;
    else return(2*((2*a)-1)/(a+1)*cat(a-1)); }
int main() {
	int t,k,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    int p=0;
	    for(j=1;j<=k;j++) {
	        p=p+cat(j-1); }
	      printf("%d\n",p); }
	return 0; }