#include <stdio.h>
int max(int a,int b)
{  if(a>=b){return a;}
else {return b;} }
int min (int a,int b)
{  if(a<=b){return a;}
else {return b;} }
int main() {
    int N1,N2,A1[20],A2[20],i,j;
	scanf("%d",&N1);
	for(i=0;i<N1;i++)
	{scanf("%d",&A1[i]);
	scanf("\n"); }
	  scanf("%d",&N2);
	  for(j=0;j<N2;j++)
	{scanf("%d",&A2[j]);
	    scanf("\n"); }
	printf("%d",A2[1]);
	   return 0; }