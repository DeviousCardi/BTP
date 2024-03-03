#include <stdio.h>
#include <stdlib.h>
int  getways(int x, int m,int arr[])
{        if(arr[x]!=-1)
    return arr[x];
    if(x==0)
    return 1;
    if(x<0||m<0)
    return 0;
    arr[x]=getways(x-5,2,arr)+getways(x-3,1,arr)+getways(x-1,0,arr);
    return *(arr+x); }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    arr[n]=-1;
    arr[0]=1;
    arr[1]=1;
    getways(n,3,arr);
    for(int i=0;i<=n;i++)
    printf("%d  ",arr[i]);
    return 0; }