#include <stdio.h>
void swap(int ind,int start,int a[]) {
    int temp;
    temp=a[start];
    a[start]=a[ind];
    a[ind]=temp; }
int max(int start,int end,int a[]) {
    int m,i;
    m=start;
    for(i=start;i<=end;i++) {
        if(a[m]<=a[i])
        m=i; }
    return m; }
void sort(int start,int end,int a[]) {
    int index;
    if(start==end)
    return;
    index=max(start,end,a);
    swap(index,start,a);
    sort(start+1,end,a); }
int main() {
    float median;
    int i,n,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(0,n-1,a);
    if((n%2)==1) {
    median=a[n/2];
    printf("%d",median); }
    if((n%2)==0) {
    median=(a[(n/2)-1]+a[n/2])/2;
    printf("%d",median); }
    return 0; }