#include <stdio.h>
#include <stdlib.h>
int main()
{int N,i,j,k,sum=0;
scanf("%d",&N);
int a[N];
int b[N];
for(i=0;i<N;i++)
{scanf("%d",&a[i]);
    b[i]=0; }
for(j=0;j<N;j++)
{for(k=0;k<N;k++)
{if((a[j]>a[k])&&(k<j))
b[j]=b[j]+1; } }
for(j=0;j<N;j++)
{sum=sum+b[j]; }
printf("%d\n",sum);
for(i=0;i<N;i++)
printf("%d  ",b[j]);
	return 0; }