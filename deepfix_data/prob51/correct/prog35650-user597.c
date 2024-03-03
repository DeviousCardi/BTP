#include <stdio.h>
int fidx(int ar[],int start,int end) {
    int max=0,idx;
    while(start<=end){
        if(max<ar[start]){
        idx=start;
        max=ar[start]; }
        start=start+1; }
    return idx; }
void swap(int ar[],int i,int j) {
    int tmp=ar[i];
    ar[i]=ar[j];
    ar[j]=tmp; }
void sort(int ar[],int start,int end) {
    if(start==end) return;
    int idxmax=fidx(ar,start,end);
    swap(ar,idxmax,start);
    sort(ar,start+1,end); }
int main() {
    int n,k,start=0,end;
    scanf("%d %d\n",&n,&k);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&ar[i]); }
    end=n-1;
    sort(ar,start,end);
    printf("%d",ar[k-1]);
    return 0; }