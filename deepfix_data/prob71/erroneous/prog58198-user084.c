#include <stdio.h>
void mergesort(int a[],int start,int n) {
    if(n>1) {
        mergesort(a,start,n/2);
        mergesort(a,start+n/2,n-n/2);
        merge(a,start,n); } }
void merge(int a,int start,int n) {
    int temp[100000];k,i=start,j=start+n/2;
    int lim_i=start+n/2,lim_j=start+n;
    for(k=0;k<;k++)
    if(i<lim_i&&j<lim_j) {
        if(a[i]<=a[j]) {
           temp[k]=a[i];
           i++; }
       else {
           temp[k]=a[j];
           j++; } }
    elseif(i==lim_i) {
        temp[k]=ar[j];
        j++ }
    else {
        temp[k]=ar[i];
    i++; }
    for(k=0;k<n;k++)
    a[start+k]=temp[k]; }
int main()
{int n,i,a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mergesort(a,0,n);
    return 0; }