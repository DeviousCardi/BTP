#include <stdio.h>
int main() {
  int n,flag=0,count;
  scanf("%d",&n);
  char str[1000];
  scanf("%s",str);
  for(i=1;i<1000000;i++)
  {  count=0;
      for(j=0;j<n;j=j+2) {
          if(a[j]==i)
          count=count+1 ; }
      if(count=i)
      flag=1; }
  if(flag==1)
  printf("yes");
  else
  printf("no");
    return 0; }