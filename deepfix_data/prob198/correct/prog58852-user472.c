#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{  if(a>=b){return a;}
else {return b;} }
int min (int a,int b)
{  if(a<=b){return a;}
else {return b;} }
int main() {
    int N1,N2,A1[20],A2[20],i,j;
	scanf("%d",&N1);
	for(i=0;i<20 ;i++)
	{scanf("%d",&A1[i]);
	scanf("\n"); }
	  printf("%d",A1[1]);
	  return 0; }