#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int Room[n];
    for(int i=0;i<n;i++) {
        Room[i]=i+1; }
    int A[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&A[i]); }
    int A2[n];
    int p=0;
    int t,k;
    for(int i=0;i<n;i++); {
      k=A[i];
      A2[p]=k;
      p++;
      i=k-1; }
    return 0; }