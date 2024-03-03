#include<stdio.h>
#include<stdlib.h>
int a[100000];
int res=0;
int diff(N,j){
    if(j==0)
    res=a[0];
    if(j==N-1)
    exit;
    else
    res=res-a[j+1];
    j=j+1;
    diff(N,j);
    return res; }
int main() {
    int N,i,m,j=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%ld ",&a[i]);
    m=diff(N,j);
    printf("%d",m);
    return 0; }