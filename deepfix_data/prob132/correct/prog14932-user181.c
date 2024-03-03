#include <stdio.h>
int main() {
  int n,k,flag;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  a[i]=0;
  for(int i=0;i<n;i++)
  {scanf("%d,",&k);
  a[k]++;}
 for(int j=1;a[j];j++)
 {if(a[j]==j)
 flag=1;
 else {flag=0;break;} }
 if(flag==1&&a[0]==0)
 printf("Yes");
 else printf("No");
    return 0; }