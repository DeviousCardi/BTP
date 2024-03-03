#include <stdio.h>
int recur(int a[], int k, int n, int sum) {
    if((n == -1) && (sum != k))  retrun 0;
    if(a[n] + sum > k) {
        recur(a,k,n-1,sum); }
    if(sum == k)  return 1;
    if(sum + a[n] < k) {
        return recur(a,k,n-1,sum+a[n]); } }
int main() {
    int n,k,i;
    scanf("%d %d", &n, &k);
    int a[n];
    int sum = 0;
    x = recur(a,k,n-1,sum);
    return 0; }