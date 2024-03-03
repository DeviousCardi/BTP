#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int i,count=0;
    if(m==2)
    return x/3 + 1;
    if(m==3) {
        for(i=0;i<x/5;i=i+5)
        {count=count+memarray[1][x-1-i];
            printf("%d\n",count); }
        if(x%5==0)
        return count+x/5;
        else
        return count+x/5+memarray[1][x%5-1]; } }
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<3;i++) {
        memarray[i]=(long*)calloc(n,sizeof(long));
        for(j=0;j<n;j++)
        memarray[i][j]=getways(j+1,i+1); }
    printf("%d",memarray[2][n-1]);
    return 0; }