#include <stdio.h>
int main() {
  int n,flag=0,count[1000000],i,j;
  scanf("%d",&n);
  char str[1000];
  scanf("%s",str);
  for(i=1;i<1000000;i++)
  {  count[i]=0;
      for(j=0;j<n;j=j+2) {
          if(str[j]==i)
          count[i]=count[i]+1 ; }
      if(count[i]==i)
      flag=1; }
  if(flag==1)
  printf("Yes");
  else
  printf("No");
    return 0; }