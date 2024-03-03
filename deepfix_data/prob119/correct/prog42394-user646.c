#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    if (n==0)
    return 0;
    else
    return 2*hanoi(n-1)+1; }
int main() {
	int i,k,t,p[100];
	scanf("%d",&t);
	    for(i=0;i<t;i++) {
        scanf("%d",&p[i]);
	        printf("%d\n",hanoi(p[i])); }
	return 0; }