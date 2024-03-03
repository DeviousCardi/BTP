#include <stdio.h>
int find_min(int a[],int start,int end) {
    int i,index,temp=a[start];
    for(i=start;i<end;i++) {
        if(temp>a[i]) {
            temp=a[start];
            index=i; } }
    return index; }
void swap(int a[],int x,int y) {
    int temp=a[x];
    a[x]=a[y];
    a[y]=temp; }
void sel_sort(int a[],int start,int n) {
    if(start==n-1) {
        return; }
    else {
      int index;
      index=find_min(a,start,n-1);
      swap(a,start,index);
      sel_sort(a,start+1,n); } }
int main() {
    int a[100000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sel_sort(a,0,n);
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }