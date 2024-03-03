#include <stdio.h>
int mat[30];
int fun(int start,int end,int s,int add) {
    if(start>end) {
        if(add==s)return 1;
        else return 0; }
    else return fun(start+1,end,s,add+mat[start])+fun(start+1,end,s,add); }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&mat[i]);
        sum=sum+mat[i]; }
    int a=fun(0,n-1,sum/2,0);
    return 0; }