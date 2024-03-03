#include <stdio.h>
int a[10000000]
void swap(int array[], i, j) {
    int temp=a[i];
    a[i]=a[j];
    a[j]=a[i]; }
int min(int array[a], start, end) {
    int i, min=a[start];
    for(i=start+1;i<=end;i++) {
       if(min>a[i]) min=a[i]; }
    if(min==a[start]) return start;
    else return i; }
void sort(int array[], start, end) {
  if (start==end) return;
  int idx_min=min(array[],start, end);
  swap(array[], start, idx_min);
  sort(array[], start+1, end); }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sort(a, 0, n-1);
    for(i=0;i<n;i++) {
        printf("%d",a[i]); }
    return 0; }