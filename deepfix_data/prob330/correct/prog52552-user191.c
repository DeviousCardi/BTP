#include <stdio.h>
int main() {
     float n,p=0,h[100];
     scanf("%f",n);
     for(int i=0;i<n;i++)
     {   scanf("%f",h[i]); }
     for(int i=1;i<n-1;i++)
     {   if((h[i]>h[i+1])&&(h[i]>h[i-1]))
             p=p+1; }
     printf("%f",&p);
     return 0; }