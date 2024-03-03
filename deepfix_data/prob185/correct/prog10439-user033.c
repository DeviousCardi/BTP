#include<stdio.h>
int recur(int a[], int n, int sum, int k) {
    int i,x;
    if(n == -1) return 0;
    if(sum + a[n] == k) return 1;
    if(sum + a[n] < k) {
        sum += a[n];
        for(i=n-1;i>-1;i--) {
            x = recur(a,i,sum,k);
            if (x == 1) break; }
        if(i != n) return 1; }
    if(sum + a[n] > k)  return 0; }
int main() {
    int n,k,i;
    scanf("%d %d", &n, &k);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    for(i=n;i>0;i--) {
        int x = recur(a,i-1,0,k);
        if(x == 1) break; }
    if(i == 0) printf("NO");
    else printf("YES");
    return 0; }