#include <stdio.h>
int find_maxi(int a[],int start,int end) {
    int k,i,s=0;
    for(i=start;i<=end;i++) {
        if(a[i]>s) {
               s=a[i];
               k=i; } }
    return k; }
void swap(int a[],int i,int j) {
    int tmp;
    tmp=a[i];
    a[i]=a[j];
    a[j]=tmp; }
void selection_sort(int a[],int start,int end) {
    int maxi;
    if(start==end)
        return;
    maxi=find_maxi(a,start,end);
    swap(a,maxi,start);
    selection_sort(a,start+1,end); }
int main() {
    int n,k,i;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
        printf("%d ",a[i]);
    return 0; }