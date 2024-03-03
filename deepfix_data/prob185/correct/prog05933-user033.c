#include<stdio.h>
int recur(int a[], int n, int sum, int k) {
    int i,x;
    if((n == -1)&&(sum != k )) return 0;
    if(sum + a[n] < k) {
        sum += a[n];
        for(i=1;i<n;i++) {
            x = recur(a,n-i,sum,k);
            if (x == 1) break; }
        if(i != n) return 1; }
    if(sum + a[n] > k)  return 0;
    if(sum + a[n] == k) return 1; }
int main() {
    int n,k,i;
    scanf("%d %d", &n, &k);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    for(i=n-1;i>-1;i--) {
        int x = recur(a,i,0,k);
        if(x == 1) break; }
    return 0; }