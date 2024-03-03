#include <stdio.h>
#include <stdlib.h>
int n;
int recur(int carry) {
    if(carry-1==n)
        return 1;
    if(carry-1>n)
        return 0;
    return recur(carry*2); }
int main() {
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&n);
	    if(recur(1))
	        printf("yes");
	    else
	        printf("no");
	    if(i!=t)
	        printf("\n");
	    return 0; } }