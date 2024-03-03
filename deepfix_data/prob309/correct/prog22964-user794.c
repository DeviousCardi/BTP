#include <stdio.h>
int main() {
  int n;
  char x;
  scanf("%d",&n);
  int i,a[n],b[n],j,count;
  for(i=0;i<n;i++){
      scanf("%d%c",&a[i],x); }
  for(i=0;i<n;i++){
      count=0;
      for(j=0;j<n;j++){
          if(a[j]==a[i])
          count=count+1; }
      b[i]=count; }
  int c=0;
  for(i=0;i<n;i++){
      if(a[i]==b[i])
      c=c+1; }
  if(c==n) printf("YES");
  else printf("NO");
    return 0; }