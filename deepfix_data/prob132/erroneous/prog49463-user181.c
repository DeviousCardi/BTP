#include <stdio.h>
int main() {
  int n,k,flag;
  scanf("%d",&n);
  int a[n];
  for(int i=o;i<n;i++)
  a[i]=0;
  for(int i=0;i<n;i++)
  {scanf("%d,",&k);
  a[k]++;}
 for(int j=0;j<n;j++)
 {if(a[j]==j)
 flag=1;
 else flag=0;}
 if(flag==1)
 printf("yes");
 else printf("no");
    return 0; }