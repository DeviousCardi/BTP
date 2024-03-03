#include <stdio.h>
#include <stdlib.h>
int  getways(int x, int arr[]) {
    if(arr[x]!=-1)
    return arr[x];
    if(x<0)
    return 0;
    arr[x]=getways(x-5,arr)+getways(x-3,arr)+getways(x-1,arr);
    return arr[x]; }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    arr[i]=-1;
    arr[0]=1;
    arr[1]=1;
    getways(n,arr);
    for(int i=0;i<=n;i++)
    printf("%d  ",arr[i]);
    return 0; }