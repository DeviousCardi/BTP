#include <stdio.h>
void merge(int a[], int star, int n) {
    int b[],k,i=start,j=start+n/2;
    for(k=0;k<n;k++) {
        if((i<(start+n/2))&&(j<(start+n)) {
            if(a[i]<a[j]) {
                b[k]=a[i];
                i++; }
            else {
                b[k]=a[j];
                j++ } }
        else if(i==(start+n/2)) {
            b[k]=a[j];
            j++; }
        else {
            b[k]=a[i];
            i++; } } }
void sort(a[],start,n) {
    int mid=n/2
    if(n>1) {
        sort(a,start,mid);
        sort(a,start+mid,mid-n);
        merge(a,start,n); } }
int main() {
    int i,n,a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,0,n);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }