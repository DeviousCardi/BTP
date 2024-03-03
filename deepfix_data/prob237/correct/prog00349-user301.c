#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0,i;
    for(;l<l+r;l++) {
        for(i=l+1;i<l+r;l++)
        if(arr[l]>arr[i])
        count+=1; }
        return count; }
int main() {
    int n,k,i,max,p;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++) {
        if(i>(n+1-k))
        break;
        else {
            p=getInversions(i,i+k-1);
            if(p>max)
            max=p; } }
    printf("%d",max);
    return 0; }