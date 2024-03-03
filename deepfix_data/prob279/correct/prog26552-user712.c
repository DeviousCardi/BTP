#include <stdio.h>
int main() {
  int i,j,n,m=0,rn,mn,r,miss=1;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++) {
      r=0;
      for(j=0;j<n;j++) {
          if(a[i]==a[j])
          r++;
          if(a[j]==miss)
          m=1; }
      if(r==2)
      rn=a[i];
      if(m!=1) {
          mn=miss;
          m=0; }
      miss++; }
  printf("%d\n",rn);
  printf("%d",mn);
    return 0; }