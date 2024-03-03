#include <stdio.h>
int main() {
    int n,i,t=1,c=0;
        scanf("%d",&n);
    char a[100];
        for(i=0;i<(2*n-1);i++)
             scanf("%c",&a[i]);
     int b[100];
          for(i=0;i<n;i++)
                 b[i]=a[(2*i+1)];
      for(i=0;i<n;i++) {
             int j;
             for(j=0;j<n;j++) {
                 if(b[i]==b[j])
                 t=t+1; }
        if(b[i]==t+1)
           c=0;
         if(b[i]!=t+1) {
               c=1;
               break; } }
   if(c==0)
       printf("No");
    else
       printf("Yes");
    return 0; }