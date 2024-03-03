#include<stdio.h>
int arr[100],inv;
int getInversions(int l,int r) {
    int i,j;
    inv=0;
    for(i=l;i<(l+r);i++) {
        for(j=i+1;j<(l+r);j++) {
            if(arr[i]>arr[j])
            inv=inv+1; } }
    return inv; }
int main() {
    int n,k,i,max=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<(n-k+1);i++)
    {printf("%d ",inv);
        if(max<inv)
        max=inv; }
printf("%d",max);
    return 0; }