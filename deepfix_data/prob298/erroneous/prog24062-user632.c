#include <stdio.h>
#include <stdlib.h>
int catal(int n) {
    if(n==0)
    return 1;
    else
    return (2*(2*n-1)*catal(n-1))/(n+1); }
int main() {
	int i,j,n,str[17];
	for(i=0;i<17;i++){
	    str[i]=catal(i); }
	scanf("%d",&n);
	for(i=0;i<17;i++) {
	    if(str[i]==n)
	    a=1; }
	if(a==1)
	printf("yes");
	else
	printf("no";)
	return 0; }