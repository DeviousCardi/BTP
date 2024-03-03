#include <stdio.h>
int main() {
  int n,flag=0,count,i,j;
  scanf("%d",&n);
  char str[1000];
  scanf("%s",str);
  for(i=1;i<10;i++)
  {  count=0;
      for(j=0;j<n;j=j+2) {
          if(str[j]=='1')
          {count=count+1 ;
          printf("%d",count);} } }
    return 0; }