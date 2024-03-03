#include<stdio.h>
int diff;
int subtract(int a[],int n,int index) {
    if(index==n) return diff;
    diff=diff-a[index];
    return subtract(a,n,index+1); }
int main() {
    int size;
    int ar[100000],i;
    scanf("%d",&size);
    for(i=0;i<size;i++) scanf("%d",&ar[i]);
    diff=ar[0];
    printf("%d",subtract(ar,size,1));
    return 0; }