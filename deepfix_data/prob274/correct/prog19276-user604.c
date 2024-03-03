#include <stdio.h>
int main(){
   int m,t=1,c,k=1,j ,i,n,a[100];
   scanf("%d ",&n);
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   { for(j=0;(j<n);j++)
        {if(a[i]==a[j])
          m=a[j];break;}break;}
   while(a[i]!=m)
      {t=t+1;
          i=a[i];}
          c=m;
 while(a[c]!=m)
  { k=k+1;
    c=a[c];}
    t=t+k;
    printf("%d %d %d",t,k,m);
    return 0; }