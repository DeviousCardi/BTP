#include <stdio.h>
int main() {
    int n,i,t=2,c=0;
        scanf("%d",&n);
    int a[100];
        for(i=0;i<n;i++)
             scanf("%d",&a[i]);
     for(i=0;i<n;i++) {
             int j;
             for(j=0;j<n;j++) {
                 if(a[i]==a[j])
                 t=t+1; }
        if(a[i]==t)
           c=0;
         if(a[i]!=t) {
               c=1;
               break; } }
   if(c==0)
       printf("Yes");
    else
       printf("No");
    return 0; }