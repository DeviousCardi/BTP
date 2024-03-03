#include <stdio.h>
#include <stdlib.h>
long *mem[3];
int value[3]={1,3,5};
long get(int x, int m) {
    if(x==0){return 1;}
    if(x<0){return 0;}
    if(mem[x-1][m-1]==-1) {
        long a=get(x-value[m-1],m)+get(x,m);
        mem[x-1][m-1]=a; }
    return mem[x-1][m-1]; }
int main() {
    int n;
    scanf("%d",&n);
    mem[0]=(long *)malloc(n*sizeof(long));
    mem[1]=(long *)malloc(n*sizeof(long));
    mem[2]=(long *)malloc(n*sizeof(long));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            mem[i][j]=-1; } }
    printf("%d",get(n,3));
    return 0; }