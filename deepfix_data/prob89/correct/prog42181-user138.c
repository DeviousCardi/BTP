#include <stdio.h>
int main() {
   int k,n;
   int j=0;
   scanf("%d",&k);
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++) {
          scanf("%d",&a[i]);
          a[i]=i+1; }
           do {
                 for(int j=0;j<n;j++) {
                         if((a[j]+a[j+1])==k)
                        {printf("lucky"); }
                           else
                         {printf("unlucky"); } } }
               while(j<n);
               return 0; }