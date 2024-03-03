#include <stdio.h>
#include <stdlib.h>
#define coins 3
const int sorted_coins[coins]={1, 3, 5};
long *memarray[3];
long getways(int x, int m) {
	int i, j, k;
    for(i=0;i<m;i++) {
    	memarray[i][0]=1;
    	for(j=1;j<=x;j++)
    		for(k=0;k<=i;k++)
    			if(j-sorted_coins[k]>=0)
    				memarray[i][j]+=memarray[k][j-sorted_coins[k]]; }
    return memarray[m-1][x]; }
int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0;i<coins;i++)
    	memarray[i]=(long *)calloc(n+1, sizeof(long));
    printf("%ld", getways(n, coins));
    return 0; }