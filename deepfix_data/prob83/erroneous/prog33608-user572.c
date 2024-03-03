#include <stdio.h>
int main()
{ int n,d,i;
scanf("%d\n",&n);
int num[n];
for(i=0;i<n;i++) {
    scanf("%d ",&num[i]); }
  scanf("\n%d",&d);
  for(i=n-d;i<n;i++) {
      printf("%d ",&num[i]); }
  for(i=0;i<(n-d);i++); {
      printf("%d ",&num[i]) }
    return 0; }