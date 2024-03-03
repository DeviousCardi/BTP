#include <stdio.h>
bool isSubsetSum (int arr[], int n, int sum) {
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;
   if (arr[n-1] > sum)
     return isSubsetSum (arr, n-1, sum);
   return isSubsetSum (arr, n-1, sum) ||
          isSubsetSum (arr, n-1, sum-arr[n-1]); }
int findPartiion (int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
       sum += arr[i];
    if (sum%2 != 0)
       return 0;
    return isSubsetSum (arr, n, sum/2); }
int main() {
  int arr[30],i;
  int n;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
  if (findPartiion(arr, n) == true)
     printf("YES");
  else
     printf("NO");
  return 0; }