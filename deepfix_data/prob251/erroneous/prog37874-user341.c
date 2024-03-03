#include <stdio.h>
#include <stdlib.h>
#define coins 3
const int sorted_coins[coins]={1, 3, 5};
long *memarray[coins];
long getways(int x, int m) {
    int i;
    memarray[m-1][x]=0;
    for(i=0;i<m;i++)
        if(x-sorted_coins[i]>=0)
            if(memarray[i][x-sorted_coins[i]]!=-1)
                memarray[m-1][x]+=memarray[i][x-sorted_coins[i]];
            else
                memarray[m-1][x]+=getways(x-sorted_coins[i], i+1);
    return memarray[m-1][x]; }
int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0;i<coins;i++) {
        memarray[i]=(long *)malloc(n+1*sizeof(long));
        for(j=0;j<=n;j++) {
            if(j)
                memarray[i][j]=-1;
            else
                memarray[i][j]=0; } }
    printf("%ld", getways(n, coins));
    return 0; }