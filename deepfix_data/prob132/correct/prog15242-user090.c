#include <stdio.h>
int main() {
  int n,flag=0,count,i,j;
  scanf("%d",&n);
  char str[1000];
  scanf(" %s ",str);
      for(j=0;j<2*n-3;j=j+2)
      {  count=1;
          for(i=j+2;j<2*n-1;j=j+2) {
              if(str[j]==str[i])
              {count=count+1 ;printf("%d",count);}
              else
              {break;} } }
    return 0; }