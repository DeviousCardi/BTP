#include<stdio.h>
int cumulative_sum(int a[],int start,int size) {
    static int s=0;
    if (size==1) return s;
    s=s+a[start]+cumulative_sum(a,start+1,size-1); }
int main() {
    int n; scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    int sum=cumulative_sum(a,0,n);
    printf("%d",&sum);
    return 0; }