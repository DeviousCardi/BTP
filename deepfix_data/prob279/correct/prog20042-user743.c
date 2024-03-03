#include <stdio.h>
int main() {
  int n,num;
  scanf("%d",&n);
  int a[n+1];
  a[0]=0;
  for(int i=1;i<=n;i++) {
    a[i]=0; }
  for(int i=1;i<=n;i++) {
  scanf("%d",&num);
  a[num]=a[num]+1; }
  for(int i=1;i<=n;i++) {
      if(a[i]==2){printf("%d\n",i);}
      if(a[i]==0){printf("%d",i);} }
    return 0; }