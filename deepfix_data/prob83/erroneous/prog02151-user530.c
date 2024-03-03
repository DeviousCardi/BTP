#include <stdio.h>
void rotate(int n,int d) {
   for{(i=n-1;i>=n-d;i++) { } }
int main() {
    int n,i,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    rotate(n,d);
    return 0; }