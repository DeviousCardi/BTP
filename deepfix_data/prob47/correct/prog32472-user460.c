#include <stdio.h>
#include <stdlib.h>
int cat(int a) {
    if(a==0)
    return 1;
    else
    return (cat(a-1)*2*(2*a-1))/((a)*(a+1)); }
int main() {
	int t,n,i,j;long s=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&n);
	    for(j=1;j<=n;j++)
	    s=s+cat(j);
	    printf("%ld",s);
	    s=0; }
return 0; }