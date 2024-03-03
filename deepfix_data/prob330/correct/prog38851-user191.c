#include <stdio.h>
int main() {
     int n,p,h[100];
     scanf("%d",n);
     for(int i=0;i<n;i++)
     {   scanf("%d",h[i]); }
     for(int i=1;i<n-1;i++)
     {   if((h[i]>h[i+1])&&(h[i]>h[i-1]))
             p=p+1; }
     printf("%d",p);
     return 0; }