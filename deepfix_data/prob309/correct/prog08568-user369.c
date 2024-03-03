#include <stdio.h>
int main() {
    int n,sc=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(int i=0;i<n;i++) {
       int nc=a[i],c=0;
         for(int j=0;j<n;j++)
        {   if(a[j]==a[i])
            c++; }
         if(nc!=c)
        {sc=0;
         break; }
        c=0; }
     if(sc)
     printf("Yes");
     else
     printf("No");
    return 0; }