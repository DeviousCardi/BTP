#include <stdio.h>
#include <stdlib.h>
int  getways(int x, int arr[]) {
    if(arr[x]!=-1)
    return arr[x];
    if(x<0)
    return 0;
    else
    arr[x]=getways(x-5,arr)+getways(x-3,arr)+getways(x-1,arr);
    return arr[x]; }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    arr[i]=-1;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {arr[i]=0;
      if(i-1>=0)
      arr[i]+=arr[i-1];
      if(i-3>=0)
      arr[i]+=arr[i-3];
      if(i-5>=0)
      arr[i]+=arr[i-5]; }
    printf("%d",arr[n]);
    return 0; }