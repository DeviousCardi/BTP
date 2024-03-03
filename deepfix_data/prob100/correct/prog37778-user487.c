#include<stdio.h>
#include<limits.h>
int main()
{int n,m,c,d;
 int i,j,k;
 int b[100];
 int max,min;
 scanf ("%d%d",&n,&m);
 for(i=1;i<=m;i=i+1)
  {scanf ("%d",&c);
   max=c;
   for(j=2;j<=n;j=j+1)
    {scanf ("%d",&d);
     if (d>max)
     max=d; }
   b[i]=max; }
min=b[1];
 for(k=2;k<=m;k=k+1)
  {if (b[k]<=min)
   min=b[k]; }
printf ("%d",min);
       return 0; }