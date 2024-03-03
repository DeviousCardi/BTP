#include <stdio.h>
int main() {
    int n,d,i,s[100];
    scanf("%d",&n);
    for(int k=0;k<n;k++) {
        scanf("%d",&s[i]); }
    scanf("%d",&d);
    int temp=s[n-1];
    for(i=0;i<d;i++) {
        for(int j=0;j<n-1;j++) {
            s[j]=s[j+1];
            s[j]=temp; } }
  for(int i=0;i<n;i++) {
      printf("%d ",s[i]); }
    return 0; }