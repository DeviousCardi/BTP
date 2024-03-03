#include <stdio.h>
int main() {
int n,arr[50],add=0;sum==0;
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d"&arr[i]);
for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
      if(j==i)
      contiue;
      else
    if(arr[j]!=arr[i])
    {continue;}
    else
      {printf("YES");
         sum=sum+1;
          break; }
    if(sum==1)
    {break;}
    add=add+1;}
if(add==n)
    printf("NO");
	return 0; }