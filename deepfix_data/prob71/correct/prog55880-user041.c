#include <stdio.h>
int swap(int ind,int start,int a[]) {
    int temp;
    temp=a[start];
    a[start]=a[ind];
    a[ind]=temp;
    return 0; }
int max(int start,int end,int a[]) {
    int m,i;
    m=start;
    for(i=start;i<=end;i++) {
        if(a[m]<=a[i])
        m=i; }
    return m; }
int sort(int start,int end,int a[]) {
    int index;
    if(start==end)
    return 0;
    index=max(start,end,a);
    swap(index,start,a);
    sort(start+1,end,a); }
int main() {
    float median;
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&n);
    sort(0,n-1,a);
    if((n%2)==1)
    median=a[n/2];
    if((n%2)==0)
    median=(a[(n/2)-1]+a[n/2])/2;
    printf("%.1f",median);
    return 0; }