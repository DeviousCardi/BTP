#include <stdio.h>
int main() {
  int n,i,ans1,ans2;
  scanf("%d",&n);
  int numbers[n];
  int numcount[n+1];
  i=0;
  for(i;i<=n;i++) {
      numcount[n]=0; }
  i=0;
  for(i;i<=n-1;i++) {
      scanf("%d",&numbers[i]); }
  i=0;
  for(i;i<=n-1;i++) {
      numcount[numbers[i]]++; }
  i=1;
  for(i;i<=n;i++) {
    if(numcount[i]==2) {
     ans1=i; }
    if(numcount[i]==0) {
        ans2=i; } }
  printf("%d\n",ans1)
  printf("%d",ans2);
    return 0; }