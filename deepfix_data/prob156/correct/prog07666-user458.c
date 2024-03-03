#include <stdio.h>
int main()
{ int n,m,a[n],i,max,j,sum=0,b[m] ;
scanf("%d%d\n",&n,&m);
for(i=0;i<n;i++){
     for(j=0;j<m;j++){
         scanf("%d",&b[j]);
         sum=sum+b[j]; }
    a[i]=sum;
  sum=0; }
max=a[0];
for(i=1;i<n;i++){
    if(a[i]<max){
        a[i]=max; } }
printf("%d",max);
    return 0; }