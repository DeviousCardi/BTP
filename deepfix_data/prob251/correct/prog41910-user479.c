#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(memarray[x][m] != -1 )
        return memarray[x][m];
    if(m <= 0)
        return 0;
    memarray[x][m] = getways(0,m-1) + getways(1,m-3) + getways(2,m-5);
    return memarray[x][m]; }
int main() {
    long int n,i,j;
    scanf("%ld",&n);
    for(i=0;i<3;i++)
        for(j=0;j<1000;j++)
            memarray[i][j] = -1;
    printf("%ld",getways(0,n-1) + getways(1,n-3) + getways(2,n-5));
    return 0; }