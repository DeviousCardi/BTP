#include <stdio.h>
long int arr[100000];
void merge(int a[],int start,int N) {
    int temp[100000],i=start,j=start+N/2;
    int lim_i=start+N/2,lim_j=start+N;
    int k;
     for (k=0;k<N;k++) {
       if (i<lim_i && j<lim_j) {
         if (a[i]<=a[j]) {
            temp[k]=a[i];
               i++; }
         else {
            temp[k]=a[j];
                j++; } }
       else if (i==lim_i) {
            temp[k]=a[j];
              j++; }
       else {
            temp[k]=a[i];
               i++; } }
    for (k=0;k<N;k++)
       a[start+k]=temp[k]; }
void merge_sort(int a[],int start,int N) {
    if (N>1) {
        int half=N/2;
          merge_sort(a,start,half);
          merge_sort(a,start+half,N-half);
          merge(a,start,N); } }
int main() {
    int n,i;
       scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%ld",&arr[i]); }
    return 0; }