#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1)
        return 1;
    else if(m==2) {
        if(x/3>=1) {
            if(memarray[x][1]==-1)
                memarray[1][x]=getways(x-3,2)*2;
            return memarray[x][1]; }
        else return 1; }
    else {
        if(x/5>=1) {
            if(memarray[x][2]==-1)
                memarray[x][2]=memarray[x-5][3]*3;
            return memarray[x][2]; }
        else
            return getways(x,2); } }
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<3;i++)
        memarray[i]=(long *)malloc((n+1)*sizeof(long));
    for(i=0;i<3;i++)
        for(j=0;j<n+1;j++)
            memarray[i][j]=0;
    printf("%ld",getways(n,3));
    return 0; }