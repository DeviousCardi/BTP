#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,inversions=0;
    for(i=l;i<l+r;i++) {
        for(j=1;i+j<l+r;j++)
            if(arr[i]>arr[i+j])
                inversions++; }
    return inversions; }
int main() {
    int i,k,n,inv,maxInv=0;
    scanf("%d\n%d\n",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i+k<=n;i++) {
        inv=getInversions(i,k);
        if(inv>maxInv)
            maxInv=inv; }
    printf("%d",maxInv);
    return 0; }