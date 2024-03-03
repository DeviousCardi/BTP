#include <stdio.h>
void selection_sort(int [],int,int);
int find_idx_of_max_elt(int [],int,int);
void swap(int [],int,int)
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    selection_sort(arr,0,n);
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0; }
void selection_sort(int a[],int start,int end) {
    int idx_max;
    if(start==end)
    return;
    idx_max=find_idx_of_max_elt(a,start,end);
    swap(a,idx_max,start);
    selection_sort(a,start+1,end); }
int find_idx_of_max_elt(int a[],int start,int end) {
    int max=0,i,j;
    for(i=start;i<end;i++) {
    if(a[i]>max) {
    max=a[i];
    j=i; } }
    return j; }
void swap(int a[],int p,intq ) {
    int temp;
    temp=a[p];
    a[p]=a[q];
    a[q]=temp; }