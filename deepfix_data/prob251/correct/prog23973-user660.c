#include <stdio.h>
#include <stdlib.h>
long *memarray[4];
long getways(int x,int m) {
    if(memarray[x][m]!=-1)
        return memarray[x][m];
    else {
        if(x<0)
            return 0;
        else if(m==1)
            return 1;
        else if(m==2)
            memarray[x][m]=getways(x,1)+getways(x-3,2);
        else if(m==3)
            memarray[x][m]=getways(x,2)+getways(x-5,3);
        return memarray[x][m]; } }
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<4;i++) {
        memarray[i]=(int*)malloc(n*sizeof(int)); }
    for(i=0;i<4;i++) {
        for(j=0;j<n;j++)
            memarray[i][j]=-1; }
    printf("%ld",getways(n,3));
    return 0; }