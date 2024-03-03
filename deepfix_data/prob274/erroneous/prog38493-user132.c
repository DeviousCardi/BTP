#include <stdio.h>
int min(int x,int y) {
    if(x>y)
    return y;
    else
    return x; }
int main(){
    int n,sum=0,i,j,k,c;
    scanf("%d",&n);
    int arr[n+1],room[n+1],a[100];
    arr[0]=1;
    room[1]=1;
    for(i=1;i<=n;i=i+1)
    scanf("%d",&arr[i]);
    for(j=2;j<=n;j=j+1) {
        room[j]=arr[1];
        arr[1]=arr[arr[1]]; }
    for(i=1;i<n;i=i+1) {
        for(k=2;k<n;k=k+1) {
        if(arr[i]!=arr[k]) {
            sum=sum+1; }
        else
        a[i]=sum+1;
        sum=0;
        break; } }
    for(j=2;j<=n;j=j+1)
    {if(a[j]==0)
    continue;
        c=min(a[1],a[j]) }
    printf("%d",c);
    return 0; }