#include <stdio.h>
int main(){
   int n,i,c=0,j,t;
   scanf("%d",&n);
   int a[n+1];
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   for(i=1;i<=n;i++)
   {t=1;
   for(j=2;j<=n;j++) {
           if(a[i]==a[j])
           {c=1;break;}
           t++;
           if(a[i]==j+1) {
            c=1;break; }
           t++; }
       if(c==1) {
           break; } }
       printf("%d ",t);
    return 0; }