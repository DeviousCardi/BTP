#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x==0)
        return 1;
    if(m==1)
        return 1;
    else if(m==2) {
        if(memarray[1][x]==-1) {
            int i;
            for(i=1;x/3>=1;x=x-3) {
                i++; }
            memarray[1][x]=i; }
        return memarray[1][x]; }
    else {
        if(memarray[2][x]==-1) {
            int i=0;
            for(;x/5>=1;x=x-5)
                i=i+getways(x,2);
            i=i+getways(x,2);
            memarray[2][x]=i; }
        return memarray[2][x]; } }
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<3;i++)
        memarray[i]=(long *)malloc((n+1)*sizeof(long));
    for(i=0;i<3;i++)
        for(j=0;j<n+1;j++)
            memarray[i][j]=-1;
    printf("%ld",getways(n,3));
    return 0; }