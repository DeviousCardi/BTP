#include <stdio.h>
int main() {
  int n,i,j,flag=0;
  scanf ("%d\n",&n);
  int arr[n],count[n];
  for (i=0;i<n;i++) {
      scanf("%d,",&arr[i]); }
  for (i=0;i<n;i++) {
      count[i]=0; }
  for (i=0;i<n;i++) {
      for (j=0;j<n;j++) {
          if (arr[i]==arr[j]) {
              count[i]++;          } } }
  for (i=0;i<n;i++) {
      if (count[i]==arr[i]) {
          flag++; } }
  if(flag==n) {
      printf ("Yes"); }
  else {
      printf("No"); }
    return 0; }