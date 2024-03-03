#include <stdio.h>
#include <stdlib.h>
int max(int a,int b);
{  if(a>=b){return a;}
else {return b;} }
int min (int a,int b)
{  if(a<=b){return a;}
else {return b;} }
int main() {
	int N1,N2,A1[20],A2[20],i,j;
	scanf("%d",&N1);
	for(i=0;i<20 && A1[i]!=EOF;i++)
	{scanf("%d\n",&A1[i]); }
	  for(j=0;j<20 && A2[j]!=EOF;j++)
	{scanf("%d\n",&A2[j]); }
	  int k=A1[0];
	  for(i=1;i<20 && A1[i]!=EOF;i++)
	  {k=max(k,A1[i]);}
	  for(i=0;i<20 && A1[i]!=EOF;i++)
	  {for(j=0;j<20&&A2[j]!=EOF;j++)
	      {if(A1[i]==A2[j]){A1[i]=k;}} }
	  int p=A1[0];
	  for(i=1;i<20 && A1[i]!=EOF;i++)
	  {p=min(p,A1[i]);}
	  printf("%d",p);
	return 0; }