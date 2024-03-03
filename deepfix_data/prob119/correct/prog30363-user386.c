#include <stdio.h>
#include <stdlib.h>
    int z=0;
    void hanoi(int n,char a, char c, char b);
    int main() {
        int t,k;
        char a,b,c;
        scanf("%d",&t);
        while(t!=0) {
            z=0;
            scanf("%d",&k);
            hanoi(k,a,c,b);
            printf("%d",c);
            t--; }
        return 0; }
    void hanoi(int n,char a, char c, char b) {
    	if(n==0)
    	return;
    	hanoi(n-1,a,b,c);
        z++;
        hanoi(n-1,b,c,a);
    	return 0; }