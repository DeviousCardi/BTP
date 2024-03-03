#include <stdio.h>
int main() {
  int n,i,j,result=0;temp=0,count=0;
  scanf("%d\n",&n);
  int arr[n];
  for(i=0;i<n;i++) {
      scanf("%d ",&arr[i]);
      getchar(); }
  for(i=0;i<n;i++)
  {   if(a[i]!=0)
      {   temp=a[i];
          count=0;
          for(j=i;j<n;j++)
          {    if(a[j]==a[i])
               {   count+=1;
                   a[j]=0; } }
          if(count==a[i])
          result=1;
          else
          {   result=0;
              break; } }
    if(result==0)
    break; }
  if(result==0)
  printf("NO");
  else printf("YES");
    return 0; }