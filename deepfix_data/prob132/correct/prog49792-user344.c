#include <stdio.h>
int num(char ch){
    return (ch-'0'); }
int main() {
  int n, i, j, k, flag=0;
  scanf("%d", &n);
  int arr[n];
  char a[n-1];
  for (i=0; i<n; i++) {
      scanf ("%d,", &arr[i]); }
  printf("%d", arr[2]);
    return 0; }