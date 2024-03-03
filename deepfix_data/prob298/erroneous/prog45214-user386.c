#include <stdio.h>
#include <stdlib.h>
int cat(a);
int main() {
	int t,k,i;
	scanf("%d",&t);
	while(t!=0) {
	    scanf("%d",&k);
	    for(i=0;i<=17;i++) {
	        if(k==cat(i)) {
	            printf("yes");
	            break; } }
	    if(i==18)
	    printf("no");
	    t--; }
	return 0; }
    int cat(a)
    if(a==0)
    return 1;
    else
    return ((2*a)((2*a)-1)/((a+1)a))*cat(a-1); }