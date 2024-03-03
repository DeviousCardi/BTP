#include <stdio.h>
int mem[100000][4];
int get(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if (mem[x][m]!=-1) {
        return mem[x][m]; }
    if(m==3) {
        mem[x][m]= get(x-5,3) + get(x-3,2) + get(x-1,1);
        return mem[x][m]; }
    if(m==2) {
        mem[x][m]= get(x-3,2) + get(x-1,1);
        return mem[x][m]; }
    if(m==1) {
        mem[x][m]=get(x-1,1);
        return mem[x][m]; } }
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n+9;i++) {
        for(j=0;j<4;j++)
        mem[i][j]=-1; }
    printf("%d",get(n,3));
    return 0; }