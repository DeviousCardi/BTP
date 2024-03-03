#include <stdio.h>
int main(){
   int n,i,c=0,j,t=1;
   scanf("%d",&n);
   int a[n+1];
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   for(i=1;i<=n;i++) {
   for(j=2;j<=n;j++)
       {   t++;
           if(a[i]==a[j])
           {c=1;break;}
           t++;
           if(a[i]==j+1) {
            c=1;break; } }
       if(c==1)
       {break; }
       if(c==0) {
           t=j-i; } }
   printf("%d ",t);
   printf("%d",t-i);
return 0; }