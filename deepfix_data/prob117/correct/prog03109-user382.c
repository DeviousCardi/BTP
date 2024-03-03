#include <stdio.h>
#include <stdlib.h>
int k;
int recur(int power) {
    if(power-1==k)
        return 1;
    if(power-1>k)
        return 0;
    return recur(power*2); }
int main() {
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
	    if(recur(1))
	        printf("yes");
	    else
	        printf("no");
	    if(i!=t)
	        printf("\n"); }
	return 0; }