#include <stdio.h>
int main() {
  int n;scanf("%d",&n);
  int a[n];int m=0,j;
  int i,f=0;int flag=1;
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]);
      if(a[i]<0)
      f=1; }
  if(f==1)
  printf("No");
  else {
      for(i=0;i<n;i++) {
          if(a[i]==-1)
          continue;
          else
          {m=a[i];c=0;
              for(j=0;j<n;j++) {
                  if(m==a[j])
                  {c++;a[j]=-1; } }
              if(c!=m)
              {  flag=0;
                  break; } } } }
  if(flag==0)
  printf("No");
  else
  printf("Yes");
    return 0; }