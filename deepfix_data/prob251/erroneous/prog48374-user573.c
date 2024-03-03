#include <stdio.h>
#include <stdlib.h>
long getways(int x) {
    int coins[3];
    coins[0]=1;
    coins[1]=3;
    coins[2]=5;
    int a[3][x+1];
    for(i=0;i<3;i++)
        a[i][0]=1;
    for(i=0;i<x+1;i++)
        a[0][i]=1;
    for(i=0;i<3;i++)
        for(j=0;j<x+1;j++) {
                if(j>=i)
                a[i][j]=a[i-1][j]+a[i][j-coins[i]];
                else
                a[i][j]=a[i-1][j]; }
    return a[2][x]; }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",getways(n));
    return 0; }