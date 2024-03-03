#include <stdio.h>
int main() {
     int n,peak=0,i,h[100];
     scanf("%i",n);
     for(i=0;i<n;i++)
     {   scanf("%i",h[i]); }
     for(i=1;i<n-1;i++)
     {   if((h[i]>h[i=1])&&(h[i]>h[i-1]))
             peak++; }
     printf("%d",&peak);
     return 0; }