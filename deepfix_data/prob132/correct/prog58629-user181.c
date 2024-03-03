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
 else {flag=0;break;}
     printf("%d   ",a[j]); }
 if(flag==1)
 printf("Yes");
 else printf("No");
    return 0; }