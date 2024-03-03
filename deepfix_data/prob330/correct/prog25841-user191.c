#include <stdio.h>
int main() {
     int n,p=0,h[100],i,j;
     scanf("%d",n);
     for(i=0;i<n;i++)
     {   scanf("%d",h[i]); }
     for(j=1;j<n-1;j++)
     {   while(h[j]>h[(j+1)]&&h[j]>h[(j-1)])
          {   p++;} }
     printf("%d",p);
     return 0; }