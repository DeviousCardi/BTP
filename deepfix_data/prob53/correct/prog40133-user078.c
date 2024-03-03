#include<stdio.h>
int diff;
int subtract(int a[],int n,int index) {
    if(index==n-1) return diff;
    diff=a[index]-a[index+1];
    return subtract(a,n,index+1); }
int main() {
    int size;
    int ar[1000000000],i;
    scanf("%d",&size);
    for(i=0;i<size;i++) scanf("%d",&ar[i]);
    printf("%d",subtract(ar,size,0));
    return 0; }