#include <stdio.h>
int main() {
  int c[100],i,n,a[100];
  scanf("%d",&n);
  for(i=0;i<100;i++)a[i]=0;
  for(i=0;i<n;i++) {
      scanf("%d",&c[i]);a[c[i]]++; }
  for(i=0;i<n;i++) {
      if(a[c[i]]!=c[i]){printf("No");break;}
  }if(i==n)printf("Yes");
    return 0; }