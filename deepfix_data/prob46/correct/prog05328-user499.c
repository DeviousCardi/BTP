#include <stdio.h>
int main(){
  int n,k,m,c;
  c=0;
  scanf("%d%d",&m,&n);
  for(k=2;k<n;k++) {
      if(n%k==0)
         c=c+1; }
  if(c==m)
  {printf("YES");}
    else
    {printf("NO");}
    return 0; }