#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return 2*(hanoi(n-1)+1)-1; }
int main() {
	int t,count=0,k;
	scanf("%d",&t);
	while(count<t) {
	    scanf("%d",&k);
	    printf("%d\n",hanoi(k));
	    count++; }
	return 0; }