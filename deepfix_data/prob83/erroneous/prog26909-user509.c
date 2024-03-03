#include <stdio.h>
int main() {
    int n,d,i,s[100];
    scanf("%d",&n);
    for(int k=0;k<n;k++) {
        scanf("%d",&s[i]); }
    scanf("%d",&d);
    for(i=0;i<d;i++)
    { int temp=s[0]
        for(int j=0;j<n-1;j++) {
            s[j]=s[j+1];
            s[j]=temp; } }
  for(int i=0;i<n;i++) {
      printf("%d ",s[i]); }
    return 0; }