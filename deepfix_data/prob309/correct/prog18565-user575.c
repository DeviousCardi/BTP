#include <stdio.h>
int main() {
  int n,m,i,t=0,j,k=0;
  scanf("%d",&n);
  int a[n],b[n];
  for(i=0;i<n;i++) {
     scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(a[j]==a[i]) {
              t=t+1; } }
      b[i]=t;
     t=0; }
  for(i=0;i<n;i++) {
      if(a[i]==b[i])
        k=k+1; }
  if(k==n)
    printf("YES");
   else
    printf("NO");
    return 0; }