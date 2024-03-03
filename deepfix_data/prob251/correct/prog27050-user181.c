#include <stdio.h>
#include <stdlib.h>
#define N 3
int s[3]={1,3,5};
int getways(int n,int arr[][3] ) {
    for(int i=0;i<N;i++)
    arr[0][i]=1;
    for(int i=1;i<=n;i++)
    for(int j=0;j<N;j++)
    {int x=0,y=0;
    if(i-s[j]>=0)
    arr[i][j]+=arr[i-s[j]][j];
    if(j>=1)
    arr[i][j]+=arr[i][j-1];
}}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1][3];
    for(int i=0;i<n+1;i++)
    for(int j=0;j<2;j++) {
        arr[i][j]=0; }
    getways(n,arr);
    printf("%d",arr[n][2]);
    return 0; }