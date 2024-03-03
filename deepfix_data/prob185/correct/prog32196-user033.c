#include <stdio.h>
int recur(int a[], int k, int n, int sum) {
    if((n == -1) && (sum != k))  return 0;
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
    int x = recur(a,k,n-1,sum);
    if(x == 0) printf("NO");
    else printf("YES");
    return 0; }