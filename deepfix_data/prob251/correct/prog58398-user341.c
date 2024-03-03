#include <stdio.h>
#include <stdlib.h>
#define coins 3
const int sorted_coins[coins]={1, 3, 5};
long *memarray[coins];
long getways(int x, int m) {
    int i;
    if(x==0)
        memarray[m-1][x]=1;
    else {
        memarray[m-1][x]=0;
        for(i=0;i<m;i++)
            if(x-sorted_coins[i]>=0)
                    memarray[m-1][x]+=getways(x-sorted_coins[i], i+1); }
    return memarray[m-1][x]; }
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<coins;i++) {
        memarray[i]=(long *)malloc(n+1*sizeof(long));
        for(j=0;j<=n;j++)
                memarray[i][j]=-1; }
    printf("%ld", getways(n, coins));
    return 0; }