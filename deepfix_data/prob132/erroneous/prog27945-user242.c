#include <stdio.h>
int main() {
  int p,n,i,flag=0,t=0;
  scanf("%d\n",&n);
  int a[n];
  for(i=0;i<n;i++)
  scanf("%d"&a[i]);
  for(i=0;i<n;i++){
      p=a[i];
      for(j=0;j<n;j++){
          if(p==a[j]){
              flag=flag+1; } }
    if(p==flag)
    b[i]=a[i]; }
  for(i=0;i<n;i++){
      if(b[i]==a[i])
      t=t+1; }
  if(t==n) printf("Yes");
  else printf("No");
    return 0; }