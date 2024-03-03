#include <stdio.h>
int main() {
     float n,p=0,h[100];
     scanf("%i",n);
     for(int i=0;i<n;i++)
     {   scanf("%i",h[i]); }
     for(int i=1;i<n-1;i++)
     {   if((h[i]>h[i+1])&&(h[i]>h[i-1]))
             p=p+1; }
     printf("%i",&p);
     return 0; }