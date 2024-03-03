#include <stdio.h>
#include <stdlib.h>
long mem[100][3];
long getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(mem[x][m-1]!=1)
        return mem[x][m-1];
    if(m==3) {
        mem[x][m-1]=getways(x-5,2)+getways(x-3,1)+getways(x-1,0);
        return mem[x][m-1]; }
    if(m==2) {
        mem[x][m-1]=getways(x-3,1)+getways(x-1,0);
        return mem[x][m-1]; }
    if(m==1) {
        mem[x][m-1]=(getways(x-1,0));
        return mem[x][m-1]; } }
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<3;j++)
    mem[i][j]=-1;
    printf("%ld",getways(n,3));
    return 0; }