#include <stdio.h>
void merg(int a, int start, int n) {
    int b[100000];
    int i=start, j=start+n/2;
    for (int k=0;k<n;k++) {
            if ((i<start+n/2)&&(j<start+n)) {
                   if (a[i]<=a[j]) { b[k] = a[i]; i++; }
                   else { b[k] = a[j]; j++; } }
            else if (i==start+n/2) { b[k] = a[j]; j++; }
            else { b[k] = a[i]; i++; } }
    for (int k=0;k<n;k++) a[start+k]=b[k]; }
void merg_sort(int a[], int start, int n) {
    if (n>1) {
        int hf = n/2;
        merg_sort(a, start, hf);
        merg_sort(a, start+half, n-hf);
        merg(a, start, n); } }
int main() {
    int n; scanf("%d",&n);
    int a[n];
    for (int i=0:i<n;i++) scanf("%d",&a[i]);
    return 0; }