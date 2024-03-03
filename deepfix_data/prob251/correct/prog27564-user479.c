#include <stdio.h>
#include <stdlib.h>
long memarray[1000][3];
int arr[3]={1,3,5};
long getways(int x, int m) {
    if(memarray[x][m-1] != -1 )
        return memarray[x][m-1];
    if(x < 0)
        return 0;
    if(m==1)
        return 1;
    if(x == 0)
        return 1;
    memarray[x][m-1] = getways(x-arr[m-1],m-1) + getways(x,m-1);
    return memarray[x][m-1]; }
int main() {
    long int n,i,j;
    scanf("%ld",&n);
    for(i=0;i<1000;i++)
        for(j=0;j<3;j++)
            memarray[i][j] = -1;
    printf("%ld",getways(n,3));
    return 0; }