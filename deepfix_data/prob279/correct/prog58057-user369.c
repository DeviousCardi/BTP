#include <stdio.h>
int main() {
    int n,rn,bc=0,mn;
    scanf("%d",&n);
    int a[n],b[n-1];
     for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
     b[bc]=a[0];
     bc++;
     for(int i=0;i<n-1;i++) {
       int c=0;
       for(int j=i+1;j<n;j++) {
          if(a[i]==a[j])
         {rn=a[i];
          c=1; }
          else
          b[bc]=a[j]; }
      if(c)
      break; }
       for(int i=0;i<n-1;i++)
       printf("%d ",a[i]);
      for(int i=0;i<n-1;i++) {
         int c=1;
         if(b[i]!=c)
        { mn=c;
          break; }
         else
         c++; }
     printf("%d\n",rn);
     printf("%d",mn);
    return 0; }