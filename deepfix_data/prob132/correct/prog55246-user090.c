#include <stdio.h>
int main() {
  int n,flag=0,count,i,j;
  scanf("%d",&n);
  char str[1000];
  scanf(" %s ",str);
      for(j=0;j<2*n-3;j=j+2) {
          for(i=j+2;j<2*n-1;j=j+2) {
              if(str[j]==str[i])
              count=count+1; }
          if(count!=str[j])
          flag=1;break; }
  if(flag==1)
  printf("No");
  else
  printf("Yes");
    return 0; }