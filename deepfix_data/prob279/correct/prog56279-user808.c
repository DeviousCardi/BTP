#include <stdio.h>
int main()
{   int i,j,n,p,k,t,g;
    scanf("%d",&n);
    int a[n],c[k];
    k=n;
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
   for(i=0;i<n;i++){
          for(k=1;k<n;k++){
           if(k!=i && a[i]==a[k]){
               p=a[i]; } } }
   for(i=0;i<k;i++){
       c[i]==i+1; }
   for(i=0;i<n;i++){
       for(t=0;t<n;t++){
           if(c[i]!=a[t]);
           g=t; } }
               printf("%d \n %d",p,g);
   return 0; }