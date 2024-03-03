#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,t;
    int s[10];
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    { scanf("%d\n",&s[i]);
    printf("%d\n",cat(s[i],t)); }
	return 0; }
int cat(int i,int t)
{  int sum=0;
    if(i<=1)
   return 0;
for(i=0;i<t;i++)
  sum+=cat(i,t)*cat(t-i-1,t);
 return sum; }