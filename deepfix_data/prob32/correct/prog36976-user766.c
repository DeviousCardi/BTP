#include <stdio.h>
#include <stdlib.h>
int main() {
    int flag;
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
for
(i=0;i<n;i=i+1)
{scanf("%d",&a[i]);}
if(a[0]<a[1])
{printf("Yes");}
else if(a[n-1]<a[n-2])
{printf("Yes");}
else {
  for(i=1;i<n-1;i=i+1) {
           if((a[i]<a[i+1])&&(a[i]<a[i-1]))
           {flag=1;
            break;} }
           if (flag==1)
       {printf("Yes");}
       else
       {printf("No");} }
     return 0; }