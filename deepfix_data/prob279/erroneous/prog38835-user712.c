#include <stdio.h>
int main() {
  int i,j,n,rn,r,c,miss,k=1;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++) {
      r=0;
      c=0;
      for(j=0;j<n;j++) {
          if(a[i]==a[j])
          r++;
          if(k==a[j])
          c++; }
      if(r==2)
      rn=a[i];
      if(c==0)
      miss=k;
      k++; }
  printf("%d\n",rn);
  printf("%d",mn);
    return 0; }