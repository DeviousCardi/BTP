#include <stdio.h>
int main(){
   int n,i,j,k,count=0,no=0,p;
   scanf("%d",&n);
   if(n<10000) {
      int a[n],b[100];
   for(i=0;i<n;i++ )
   scanf("%d",&a[i]);
  for(j=0;j<100;j++ )
 {count=0;
     for(i=0;i<n;i++ )
{ if (a[i]==j)
  count++; }
 b[j]=count; }
 for(j=0;j<100;j++ )
{p=b[j];
no++;
    for(k=0;k<p;k++)
printf("%d",no); } }
    printf("end");
    return 0; }