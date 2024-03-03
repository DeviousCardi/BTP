#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int values[3]={1,3,5};
long getways(int x, int m) {
    if(x==0)
        return 1;
    if(x<0 || m<=0)
        return 0;
    if(memarray[m-1][x-1] != -1)
        return memarray[m-1][x-1];
    long temp=getways(x,m-1)+getways(x-values[m-1],m);
    memarray[m-1][x-1]=temp;
    return temp; }
int main() {
    int n,i,j;
    scanf("%d",&n);
    memarray[0]=(long *)malloc(n*sizeof(long));
    memarray[1]=(long *)malloc(n*sizeof(long));
    memarray[2]=(long *)malloc(n*sizeof(long));
    for(i=0;i<3;i++) {
        for(j=0;j<n;j++)
            memarray[i][j]=-1; }
    printf("%ld",getways(n,3));
    return 0; }