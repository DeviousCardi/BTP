#include<stdio.h>
#include<strings.h>
int main() {
  int i,n,c[100],s[100];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&c[i]); }
for(i=0;i<=n;i++) {
    s[i]=c[n-i]; }
for(i=0;i<n;i++) {
    printf("%d\t",s[i]); }
    return 0; }