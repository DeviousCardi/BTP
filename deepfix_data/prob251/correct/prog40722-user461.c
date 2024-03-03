#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int y) {
    if(y==1)return 1;
    int m;
    if(y==3)m=5;
    else if(y==2)m=3;
    else m=1;
    long k=0;
    for(int i=0;m*i<=x;++i)
        k=k+(memarray[y-1][x-m*i]==-1)?getways(x-m*i,y-1):memarray[y-1][x-m*i];
    memarray[y-1][x]=k;
    return k; }
int main() {
    int n;
    for(int i=0;i<3;++i)
        memarray[i]=calloc(n+1,sizeof(long));
    for(int i=0;i<n+1;++i)memarray[0][i]=memarray[1][i]=memarray[2][i]=-1 ;
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }