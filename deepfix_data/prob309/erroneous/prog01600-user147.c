#include <stdio.h>
int main()
{int n,a[100],count[100],max=0,flag=0;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
  {scanf("%d ",&a[i]);
  if(a[i]>max)
   {max=a[i];} }
for(int i=0;i<max;i++)
  {count[i]=0;}
for(int i=0;i<n;i++)
  {count[a[i]]++;}
for(int i=0;i<n;i++)
  {if(a[i]==c[a[i]])
   flag++; }
if(flag==n)
printf("Yes");
    return 0; }