#include<stdio.h>
#include<limits.h>
int main()
{int n,m,i,j,min;
int row[1000];
int col[1000];
for(i=0;i<m;i++)
row[i]=0;
for(i=0;i<n;i++)
col[j]=0;
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<m;i++)
{scanf("%d",&col[0]);
row[i]=col[0];
    for(j=1;j<n;j++)
{scanf("%d",&col[j]);
    if(col[j]>row[i])
    row[i]=col[j]; } }
min=row[0];
for(i=1;i<m;i++)
{if(row[i]<min)
 min=row[i]; }
printf("%d",min);
return 0; }