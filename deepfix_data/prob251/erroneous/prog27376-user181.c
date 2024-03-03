#include <stdio.h>
#include <stdlib.h>
int s[3]={1,2,3};
int getways(int arr[][n+1],int m, int n) {
    for(int i=0;i<n+1;i++)
    arr[0][i]=0;
    for(int i=0;i<=n;i++)
    for(int j=0;j<m;j++)
    {int x,y;
    if(i-s[m]>=0)
    arr[i][j]+=arr[i-s[m]][j];
    if(j>=1)
    arr[i][j]+=arr[i][j-1];
}}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1][3];
    for(int i=0;i<n+1;i++)
    for(int j=0;j<m;j++) {
        arr[i][j]=0; }
    return 0; }