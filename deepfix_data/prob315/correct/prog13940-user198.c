#include <stdio.h>
#include <stdlib.h>
int main()
{int N,A[1000],cnt=0,i,j,k[1000],p=0,l;
scanf("%d",&N);
for(i=0;i<N;i++)
scanf("%d",&A[i]);
for(i=0;i<N;i++)
{for(j=0,cnt=0;j<N;j++)
if(A[i]>A[j])
{l=A[i];
A[i]=A[j];
A[j]=l;
    cnt++; }
k[i]=cnt; }
for(i=0;i<N;i++)
p=p+k[i];
printf("%d",p);
for(i=0;i<N;i++)
printf("%d",k[i]);
	return 0; }