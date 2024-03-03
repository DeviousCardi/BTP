#include<stdio.h>
#include<stdlib.h>
long *memo[3];
int values[3]={1,3,5};
int count(int x,int m) {
    if(x==0)
    return 1;
    if(x<0)
    return 0;
    if(x>0 && m<=0)
    return 0;
    if(memo[m-1][x-1]!=-1)
    return memo[m-1][x-1];
    long temp=count(x,m-1)+count(x-values[m-1],m);
    memo[m-1][x-1]=temp;
    return temp; }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        memo[0]=malloc(n*sizeof(long));
        memo[1]=malloc(n*sizeof(long));
        memo[2]=malloc(n*sizeof(long)); }
    printf("%d",count);
    return 0; }