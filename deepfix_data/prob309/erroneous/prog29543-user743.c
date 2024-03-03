#include <stdio.h>
int main() {
  int n,num,count=0;
  scanf("%d",&n);
  int a[n+1];
  a[0]=0;
  for(int i=1;i<=n;i++) {
    a[i]=0; }
  for(int i=1;i<=n;i++) {
  scanf("%d,",&num);
  a[num]=a[num]+1; }
  for(int i=1;i<=n;i++) {
      if(a[i]!=0) {
      if(a[i]!=i){printf("No");count++;break;} }
  if(count==0){printf("Yes");}
    return 0; }