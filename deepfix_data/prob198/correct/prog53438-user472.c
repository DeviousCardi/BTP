#include <stdio.h>
int max(int a,int b)
{  if(a>=b){return a;}
else {return b;} }
int min (int a,int b)
{  if(a<=b){return a;}
else {return b;} }
int main() {
    int N1,N2,A1[20],A2[20];
	scanf("%d\n",&N1);
	for(int i=0;i<N1;i++)
	{scanf("%d\n",&A1[i]); }
	  scanf("%d\n",&N2);
	  for(int j=0;j<N2;j++)
	{scanf("%d\n",&A2[j]); }
	printf("%d",A1[1]);
	   return 0; }