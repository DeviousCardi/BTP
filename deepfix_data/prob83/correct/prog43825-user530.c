#include <stdio.h>
void rotate(int n,int d,int *a);
int main() {
    int n,i,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    rotate(n,d,a);
    return 0; }
void rotate(int n,int d,int *a) {
    int temp,i;
    for(i=n-1;i>=n-d;i--) {
        a[n-1-i]=temp;
        a[n-1-i]=a[i];
        a[i]=temp; } }