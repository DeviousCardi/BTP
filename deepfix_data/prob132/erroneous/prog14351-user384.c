#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++) {
      scanf("%d",&a[i])
      getchar(); }
  int frq[n];
  for(int i=0;i<n;i++) {
      frq[i]=0;
      for(int j=0;j<n;j++) {
          if(a[i]==a[j])
            frq[i]=frq[i]+1; } }
  int i;
  for(i=0;i<n;i++) {
      if(a[i]!=frq[i])
       break; }
  if(i<n-1)
    printf("No");
  else
    printf("Yes");
    return 0; }