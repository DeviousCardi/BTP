#include <stdio.h>
#include <stdlib.h>
#define N 3
int s[3]={1,2,3};
int getways(int n,int arr[][3] ) {
    for(int i=0;i<n+1;i++)
    arr[0][i]=1;
    for(int i=0;i<=n;i++)
    for(int j=0;j<N;j++)
    {int x=0,y=0;
    if(i-s[j]>=0)
    x=arr[i-s[j]][j];
    if(j>=1)
    y=arr[i][j-1];
   arr[i][j]=x+y ;
}}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1][3];
    for(int i=0;i<n+1;i++)
    for(int j=0;j<N;j++) {
        arr[i][j]=0; }
    getways(n,arr);
    printf("%d",arr[n][2]);
    return 0; }