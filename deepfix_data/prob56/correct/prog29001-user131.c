#include <stdio.h>
#include <stdlib.h>
int cata(int k)  {
    int i,j=0;
    if(k<=1)
    return 1;
    else if(k>1)  {
    for(i=0;i<k;i++) {
        j=j+cata(i)*cata(k-1-i);
    }}
 return j; }
int serch(int k)
{int i,j;
for(i=0;cata(i)<=k;i++)
    {}
 return cata(i+1); }
int main ()     {
    int k,i;
    int m;
	scanf("%d",&k);
	for(i=1;i<=k;i++) {
	   scanf("%d\n",&m);
	printf("%d\n",serch(m)); }
   return 0; }