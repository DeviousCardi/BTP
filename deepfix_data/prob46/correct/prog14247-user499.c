#include <stdio.h>
int main(){
  int n,k,c;
  c=0;
  scanf("%d",&n);
  for(k=2;k<n;k++)
  { if(n%k==0)
   { c=c+1;
    printf("YES");}
    else
    {printf("NO");} }
    return 0; }