#include<stdio.h>
#include<stdlib.h>
int a[1000000000];
int res=a[0];
int diff(a[],N,j){
    if(j==N-1)
    res=diff(a,N,N-2)-a[N-1];
    else
    res=res-a[j+1];
    diff(a,N,j+1);
    return res; }
int main() {
    int N,i,m,j=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d ",&a[i]);
    m=diff(a,N,j);
    printf("%d",m);
    return 0; }