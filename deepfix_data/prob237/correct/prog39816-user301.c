#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0,i;
    for(l=l;l<l+r;l++) {
        for(i=l+1;i<l+r;i++) {
           if(arr[l]>arr[i])
            count+=1; } }
        printf("%d",count);
        return 0; }
int main() {
    int n,k,i,max=0,p;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n+1-k;i++) {
            p=getInversions(i,k);
            if(p>max)
            max=p; }
    printf("%d",max);
    return 0; }