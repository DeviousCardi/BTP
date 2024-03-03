#include <stdio.h>
#include <stdlib.h>
int cat(int a){
    if(a==1)
    return 1;
    if(a==0) return 1;
    else return(2*(2*a-1)/(a+1)*cat(a-1)); }
int main() {
	int t,k,i,p=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    for(i=1;i<=k;i++) {
	        p=p+cat(i);
	        printf("%d\n",p); } }
	return 0; }