#include <stdio.h>
int main()
{ int n,m,a[n],i,max,j,sum=0,b[m] ;
scanf("%d%d\n",&n,&m);
for(i=0;i<n;i++){
     for(j=0;j<m;j++){
         scanf("%d ",&b[j]);
         sum=sum+b[j]; }
         a[i]=sum;
          sum=0;
   scanf("%d\n",&a[i]); }
for(i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        a[i+1]=a[i]; }
    else{a[i+1]=a[i+1];} }
printf("%d",a[N-1]);
    return 0; }