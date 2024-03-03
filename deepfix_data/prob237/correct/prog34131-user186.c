#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,x=0;
    for(i=l;i<(r+l);i++)
    for(j=l;j<(r+l);j++) {
        if((j>i)&&(arr[i]>arr[j]))
        x=x+1; }
    return x; }
int main() {
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<=n-k+1;i++)
    printf("%d\n",getInversions(i,k));
    return 0; }