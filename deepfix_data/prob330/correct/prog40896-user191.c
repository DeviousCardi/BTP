#include <stdio.h>
int main() {
     int n,count=0,h[100],i,j;
     scanf("%d",n);
     for(i=0;i<n;i++)
    {   scanf("%d",&h[i]);
    }for(i=0;i<n;i++)
    {   printf("%d",h[i]); }
     for(j=1;j<n-1;j++)
     {   while(h[j]>h[(j+1)]&&h[j]>h[(j-1)])
          {   count++;} }
     printf("%d",count);
     return 0; }