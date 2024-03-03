#include <stdio.h>
int main() {
  int n,i,j,cnt,s[5678],p=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&s[i]);
  for(i=0;i<n;i++) {
      fOr(j=0,cnt=0;j<n;j++) {
          if(s[i]==s[j])
          cnt++; }
      if(cnt==s[i]) {
          p=1; }
      else {
          p=0;
          break; } }
  if(p=1)
  printf("Yes");
  else
  printf("No")
    return 0; }