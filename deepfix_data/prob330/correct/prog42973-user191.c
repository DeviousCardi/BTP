#include <stdio.h>
int main() {
     int n,p=0,h[100],i;
     scanf("%d",n);
     for(i=0;i<n;i++)
     {   scanf("%d",h[i]); }
     for(i=1;i<n-1;i++)
     {   while(h[i]>h[i+1]&&h[i]>h[i-1])
          {   p++;} }
     printf("%d",p);
     return 0; }