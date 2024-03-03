#include <stdio.h>
#include <stdlib.h>
long getways(int x, int m,int arr[]) {
    if(x==0||m==0)
    return 0;
    if(arr[x]!=-1)
    return arr[x];
    if(m==3)
    arr[x]=getways(x-5,m-1,arr)+getways(x-3,m-2,arr)+getways(x-1,m-3,arr);
    return arr[x]; }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    arr[n]=-1;
    int d=getways(n,3,arr);
    printf("%d",d);
    return 0; }