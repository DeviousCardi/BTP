#include <stdio.h>
int mem[100][4];
int getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(mem[x][m]!=-1) {
        printf("momo");
        return mem[x][m]; }
    if(m==3) {
        printf("lala");
        mem[x][m]=getways(x-5,3)+getways(x-3,2)+1;
        return mem[x][m]; }
    if(m==2) {
        printf("lolo");
        mem[x][m]=getways(x-3,2)+1;
        return mem[x][m]; }
    if(m==1) {
        printf("lili");
        mem[x][m]=1;
        return mem[x][m]; }
    printf("xoxo"); }
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<4;j++)
        mem[i][j]=-1; }
    printf("%d",getways(n,3));
    return 0; }