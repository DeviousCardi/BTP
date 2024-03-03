#include <stdio.h>
#include <stdlib.h>
int cat(int a){
    if(a==1)
    return 1;
    if(a==0) return 0;
    else return(2*(2*a-1)/(a+1)*cat(a-1)); }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    int p=0;
	    for(i=1;i<=k;i++) {
	        p=p+cat(i);
	        printf("%d\n",p); } }
	return 0; }