#include <stdio.h>
bool isSubsetSum(int set[], int n, int sum) {
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;
   if (set[n-1] > sum)
     return isSubsetSum(set, n-1, sum);
   return isSubsetSum(set, n-1, sum) || isSubsetSum(set, n-1, sum-set[n-1]); }
int main() {
    int n,s,i,a[100];
    scanf("%d",&n);
  scanf("%d",&s);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if(isSubsetSum(a,n,s)==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }