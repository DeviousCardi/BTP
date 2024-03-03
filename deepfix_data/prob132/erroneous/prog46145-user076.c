#include <stdio.h>
int main() {
  int i,j,n,flag=0;
  scanf("%d",n);
  for(i=0;i<n;i++) {
      scanf("%d",a[i]); }
  for(i=0;i<n;i++)
  {   int count=0;
      for(j=0;j<n;j++) {
          if(a[i]==a[j]) {
              count=count+1; } }
      if(a[i]!=count)
           flag=1; }
  if(flag==0)
       printf("YES");
  else
       printf("NO");
    return 0; }