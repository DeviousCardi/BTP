#include <stdio.h>
#include <stdlib.h>
    int z=0;
    int hanoi(int n);
    int main() {
        int t,k;
        scanf("%d",&t);
        while(t!=0) {
            z=0;
            scanf("%d",&k);
            z=hanoi(k);
            printf("%d\n",z);
            t--; }
        return 0; }
    int hanoi(int n) {
    	if(n==0)
    	return 1;
    	else return ((2*hanoi(n-1))-1); }