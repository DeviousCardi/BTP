#include <stdio.h>
int main() {
    int n,i,j,count,rep,mis;
    scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=1;i<=n;i++) {
      count=0;
      for(j=0;j<n;j++) {
          if(a[j]==i)
          count++; }
      if(count==2)
          rep=i;
         else if(count==0)
         mis=i; }
  printf("%d\n",rep);
  printf("%d",mis);
    return 0; }