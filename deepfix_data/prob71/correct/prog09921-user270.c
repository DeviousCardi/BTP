#include <stdio.h>
int a[100000];
void swap(int a[], int i,int j) {
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp; }
int min(int a[],int start,int end) {
    int i, min=start;
    for(i=start+1;i<=end;i++) {
       if(a[min]>a[i]) min=i; }
    if(min==start) {
    return start;}
    else {
    return min;} }
void sort(int a[],int start,int end) {
  if (start==end) return;
  int idx_min=min(a,start, end);
  swap(a, start, idx_min);
  sort(a, start+1, end); }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sort(a, 0, n-1);
    for(i=0;i<n;i++) { }
    if (n%2==0)
    printf("%.1f",(a[n/2]+a[n/2-1])/2.0);
    else
    printf("%d",a[n/2]);
    return 0; }