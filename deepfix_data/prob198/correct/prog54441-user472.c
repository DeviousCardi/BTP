#include <stdio.h>
int max(int a,int b)
{  if(a>=b){return a;}
else {return b;} }
int min (int a,int b)
{  if(a<=b){return a;}
else {return b;} }
int main() {
    int N1,N2,A1[20],A2[20],i,j;
	scanf("%d\n",&N1);
	for( i=0;i<N1;i++)
	{scanf("%d\n",&A1[i]); }
	  scanf("%d\n",&N2);
	  for( j=0;j<N2;j++)
	{scanf("%d\n",&A2[j]); }
	  int k=A1[0];
	  for(i=1;i<N1;i++)
	  {k=max(k,A1[i]);}
	  printf("%d",k);
	   for(i=0;i<N1;i++)
	  {for(j=0;j<N2;j++)
	      {if(A1[i]==A2[j]){A1[i]=k;}} }
	  int p=A1[0];
	  for(i=1;i<N1;i++)
	  {p=min(p,A1[i]);}
	  printf("%d",p);
	   return 0; }