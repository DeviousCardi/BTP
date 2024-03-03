#include <stdio.h>
void shft(int a[], int b);
int main() {
    int arr[20],n,d,c1,c2,c3;
    scanf("%d", &n);
    for(c1=0;c1<n;c1++) {
        scanf("%d", &arr[c1]); }
    scanf("%d", &d);
    for(c2=0;c2<d;c2++) {
        shft(arr,n); }
    for(c3=0;c3<n;c3++)
    printf("%d ", arr[c3]);
    return 0; }
void shft(int a[], int b) {
    int t,c1;
    t = a[b-1];
    for(c1=(b-2);c1>=0;c1--) {
       a[c1+1] = a[c1]; }
    a[0]=t; }