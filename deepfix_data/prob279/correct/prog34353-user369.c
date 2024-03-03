#include <stdio.h>
int main() {
    int n,rn,bc=1,mn,c=1;
    scanf("%d",&n);
    int a[n],b[n-1];
     for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
     b[0]=a[0];
     for(int i=0;i<n-1;i++) {
       int c=0;
       for(int j=i+1;j<n;j++) {
          if(a[i]==a[j])
         {rn=a[i];
          c=1; }
          else
         { b[bc]=a[j];
           bc++; } }
      if(c)
      break; }
      for(int i=0;i<n-1;i++)
       printf("%d ",b[i]);
      for(int i=0;i<n-1;i++) {
         if(b[i]!=c)
        { mn=c;
          break; }
         else
         c++; }
     printf("%d\n",rn);
     printf("%d",mn);
     return 0; }