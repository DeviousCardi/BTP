#include <stdio.h>
int max_idx(int a[],int start,int end) {
    int max=start,i;
    for(i=start;i<=end;i++) {
        if(a[i]>a[max])
        max=i; }
    return max; }
void sel_sort(int a[],int start,int end,int k) {
    if(start>=end)
    return;
    int idx=max_idx(a,start,end);
    int t;
    t=a[start];
    a[start]=a[idx];
    a[idx]=t;
    sel_sort(a,start+1,end); }
int main() {
    int N,k,i;
    scanf("%d %d",&N,&k);
    int c[N];
    for(i=0;i<N;i++)
    scanf("%d",&c[i]);
    sel_sort(a,0,N-1,k);
    return 0; }