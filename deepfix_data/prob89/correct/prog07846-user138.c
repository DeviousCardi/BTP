#include <stdio.h>
int main(){
int k,n;
   scanf("%d",&k);
   scanf("%d",&n);
   int a[100];
   for(int i=0;i<n;i++) {
          scanf("%d",&a[i]);
          a[i]=i+1;
           for(int j=0;j<n;j++)
            {j=i;
             if((a[j]+a[j+1]==k))
            {printf("lucky"); }
            else
               {printf("unlucky"); } } }
               return 0; }